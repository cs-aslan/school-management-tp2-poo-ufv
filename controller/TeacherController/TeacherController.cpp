#include "TeacherController.hpp"

controller::TeacherController::TeacherController()
{
    this->persistence = model::persistence::DAOTeacher();
}

controller::TeacherController::~TeacherController()
{
}

void controller::TeacherController::insert(std::string name, std::string cpf, std::string street, std::string neighborhood, std::string city, std::string CEP, std::string area, double SalaryPerHour){
    try
    {
        this->persistence.search(cpf); // Throws exception when there is no teacher with this cpf
        throw exception::BusinessRule("Impossivel inserir professor com o mesmo cpf!");; // Not inserted
    }
    catch(exception::PersistenceError& e)
    {
        this->persistence.insert(name, cpf, street, neighborhood, city, CEP, area, SalaryPerHour);
    }
    
}