#include "SchoolClassController.hpp"

controller::SchoolClassController::SchoolClassController(){
    this->persistence = model::persistence::DAOSchoolClass();
    this->lastRegistrationNumber = 0;

}

controller::SchoolClassController::~SchoolClassController(){
    
}

void controller::SchoolClassController::insert(unsigned int year, std::string teacherCPF, controller::TeacherController& teacherController){
    try
    {
        teacherController.search(teacherCPF); // Throws exception when there is no teacher with this cpf
        this->persistence.insert(this->lastRegistrationNumber, year, teacherCPF);
        this->lastRegistrationNumber++;

    }
    catch(exception::PersistenceError& e)
    {
        throw exception::BusinessRule("CPF de professor invalido!");; // Not inserted
    }
}

model::entity::SchoolClass& controller::SchoolClassController::search(unsigned int code){
    return this->persistence.search(code);
}

model::entity::EnrolledStudent& controller::SchoolClassController::searchEnrolledStudent(unsigned int code, std::string enrolledStudentCPF){
    return this->search(code).search(enrolledStudentCPF);
}

void controller::SchoolClassController::insertEnrolledStudent(unsigned int code, std::string enrolledStudentCPF, controller::StudentController &studentController){
    try
    {
        studentController.search(enrolledStudentCPF); // Throws exception when there is no teacher with this cpf
        this->search(code);

        this->persistence.insertEnrolledStudent(code, enrolledStudentCPF);
    }
    catch(exception::PersistenceError& e)
    {
        throw exception::BusinessRule("CPF do aluno invalido ou turma inexistente!"); // Not inserted
    }
}

void controller::SchoolClassController::setGradeEnrolledStudent(unsigned int code, std::string enrolledStudentCPF, double gradeValue, int gradeNumber){
    if(gradeNumber>4) throw exception::BusinessRule("Bimestre invalido");
    
    this->searchEnrolledStudent(code, enrolledStudentCPF).setGrade(gradeNumber-1, gradeValue);
}

std::list<model::entity::SchoolClass>& controller::SchoolClassController::getAll(){
    return this->persistence.getAll();
}