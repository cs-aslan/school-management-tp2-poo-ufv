// using namespace std;

#include "Student.hpp"
#include "../../../exception/BadArgument/BadArgument.hpp"

model::entity::Student::Student(std::string name, std::string cpf, std::string street, std::string neighborhood, std::string city, std::string CEP, std::string fatherName, std::string motherName, unsigned int registrationNumber) : model::entity::Person(name, cpf, street, neighborhood, city, CEP) // Throws BadArgument
{
    if(fatherName.empty() || motherName.empty())
        throw exception::BadArgument("Todos os parametros devem ser preenchidos!");

    this->fatherName = fatherName;
    this->motherName = motherName;
    this->registrationNumber = registrationNumber;
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
