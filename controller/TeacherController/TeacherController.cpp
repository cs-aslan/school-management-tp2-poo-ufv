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

std::list<model::entity::Teacher>& controller::TeacherController::getAll(){
    return this-> persistence.getAll();
}

void controller::TeacherController::setStreet(std::string cpf, std::string street) // Throws BadArgument, Persistence Error
{
    this->persistence.search(cpf).setStreet(street);
}

void controller::TeacherController::setNeighborhood(std::string cpf, std::string neighborhood) // Throws BadArgument, Persistence Error
{
    this->persistence.search(cpf).setNeighborhood(neighborhood);
}

void controller::TeacherController::setCity(std::string cpf, std::string city) // Throws BadArgument, Persistence Error
{
    this->persistence.search(cpf).setCity(city);
}

void controller::TeacherController::setCEP(std::string cpf, std::string CEP) // Throws BadArgument, Persistence Error
{
    this->persistence.search(cpf).setCEP(CEP);
}

void controller::TeacherController::setActive(std::string cpf, bool active) // Throws Persistence Error
{
    this->persistence.search(cpf).setActive(active);
}