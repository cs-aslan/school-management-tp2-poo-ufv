#include "StudentController.hpp"

controller::StudentController::StudentController()
{
    this->persistence = model::persistence::DAOStudent();
    this->lastRegistrationNumber = 0;
}

controller::StudentController::~StudentController()
{
}

void controller::StudentController::insert(std::string name, std::string cpf, std::string street, std::string neighborhood, std::string city, std::string CEP, std::string fatherName, std::string motherName, unsigned int registrationNumber){
    try
    {
        this->persistence.search(cpf); // Throws exception when there is no register with this cpf
        throw exception::BusinessRule("Impossivel inserir aluno com o mesmo cpf!");; // Not inserted
    }
    catch(exception::PersistenceError& e)
    {
        this->persistence.insert(name, cpf, street, neighborhood, city, CEP, fatherName, motherName, this->lastRegistrationNumber);
        this->lastRegistrationNumber++;
    }
    
}

std::list<model::entity::Student>& controller::StudentController::getAll(){
    return this-> persistence.getAll();
}

void controller::StudentController::setStreet(std::string cpf, std::string street) // Throws BadArgument, Persistence Error
{
    this->persistence.search(cpf).setStreet(street);
}

void controller::StudentController::setNeighborhood(std::string cpf, std::string neighborhood) // Throws BadArgument, Persistence Error
{
    this->persistence.search(cpf).setNeighborhood(neighborhood);
}

void controller::StudentController::setCity(std::string cpf, std::string city) // Throws BadArgument, Persistence Error
{
    this->persistence.search(cpf).setCity(city);
}

void controller::StudentController::setCEP(std::string cpf, std::string CEP) // Throws BadArgument, Persistence Error
{
    this->persistence.search(cpf).setCEP(CEP);
}

void controller::StudentController::setActive(std::string cpf, bool active) // Throws Persistence Error
{
    this->persistence.search(cpf).setActive(active);
}