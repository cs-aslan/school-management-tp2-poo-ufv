#include "SchoolClassViewer.hpp"

std::string view::schoolClass::menu(){
    return view::aux::separator() +
    "1- Inserir nova turma\n" +
    "2- Listar todas as turmas\n" +
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