#include "Student.hpp"

model::entity::Student::Student(std::string name, std::string cpf, std::string street, std::string neighborhood, std::string city, std::string CEP, std::string fatherName, std::string motherName, unsigned int registrationNumber) : model::entity::Person(name, cpf, street, neighborhood, city, CEP) // Throws BadArgument
{
    if(fatherName.empty() || motherName.empty())
        throw exception::BadArgument("Todos os parametros devem ser preenchidos!");

    this->fatherName = fatherName;
    this->motherName = motherName;
    this->registrationNumber = registrationNumber;
    this->active = true;
}

model::entity::Student::~Student()
{
}

unsigned int model::entity::Student::getRegistrationNumber()
{
    return this->registrationNumber;
}

std::string model::entity::Student::getFatherName()
{
    return this->fatherName;
}

std::string model::entity::Student::getMotherName()
{
    return this->motherName;
}

std::string model::entity::Student::toString()
{
    return Person::toString() + "\n" +
            "Nome do pai: " + this->fatherName + "\n" +
            "Nome da mae: " + this->motherName + "\n" +
            "Numero de matricula: " + std::to_string(this->registrationNumber);
}

void model::entity::Student::setActive(bool active){
    this->active = active;
}