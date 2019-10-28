#include "SchoolClassController.hpp"

controller::SchoolClassController::SchoolClassController(){
    this->persistence = model::persistence::DAOSchoolClass();
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