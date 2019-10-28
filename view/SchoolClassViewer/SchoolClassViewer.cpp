#include "SchoolClassViewer.hpp"

std::string view::schoolClass::menu(){
    return view::aux::separator() +
    "1- Criar nova turma vazia\n" +
    "2- Listar todas as turmas\n" +
    "3- Inserir aluno em uma turma\n" +
    "4- Definir nota de um aluno em uma turma\n" +
    view::aux::separator();
}

void view::schoolClass::print(controller::SchoolClassController & schoolClassController)
{
    std::list<model::entity::SchoolClass> list = schoolClassController.getAll();

    std::list<model::entity::SchoolClass>::iterator it;

    for (it = list.begin(); it != list.end(); it++)
    {
        std::cout << it->toString() << "\n" << view::aux::separator();
    
    }
}
    
void view::schoolClass::insert(controller::SchoolClassController & schoolClassController, controller::TeacherController & teacherController)
{
    try
    {
        std::cout << view::aux::separator();

        std::cout << "Insira o cpf do professor: ";
        std::string teacherCPF;
        getline(std::cin, teacherCPF, '\n');

        std::cout << "Insira o ano: ";
        std::string auxYear;
        getline(std::cin, auxYear, '\n');
        unsigned int year = std::stoul(auxYear);

        schoolClassController.insert(year, teacherCPF, teacherController);
    }
    catch(exception::BusinessRule& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(exception::BadArgument& e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << view::aux::separator();
}

void view::schoolClass::insertEnrolledStudent(controller::SchoolClassController & controller, controller::StudentController & studentController){
    try
    {
        std::cout << "Insira o codigo da turma: ";
        std::string classCodeAux;
        getline(std::cin, classCodeAux, '\n');
        unsigned int classCode = std::stoi(classCodeAux);

        std::cout << "Insira o cpf do aluno: ";
        std::string enrolledStudentCPF;
        getline(std::cin, enrolledStudentCPF, '\n');

        controller.insertEnrolledStudent(classCode, enrolledStudentCPF, studentController);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}

void view::schoolClass::setGrade(controller::SchoolClassController & controller){
    try
    {
        std::cout << "Insira o codigo da turma: ";
        std::string classCodeAux;
        getline(std::cin, classCodeAux, '\n');
        unsigned int classCode = std::stoi(classCodeAux);

        std::cout << "Insira o cpf do aluno: ";
        std::string enrolledStudentCPF;
        getline(std::cin, enrolledStudentCPF, '\n');

        std::cout << "Insira o numero do bimestre (1 a 4): ";
        std::string gradeNumberAux;
        getline(std::cin, gradeNumberAux, '\n');
        unsigned int gradeNumber = std::stoi(gradeNumberAux);

        std::cout << "Insira a nota do bimestre: ";
        std::string gradeValueAux;
        getline(std::cin, gradeValueAux, '\n');
        double gradeValue = std::stod(gradeValueAux);

        controller.setGradeEnrolledStudent(classCode, enrolledStudentCPF, gradeValue, gradeNumber);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}