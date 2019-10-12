// using namespace std;

#include "Student.hpp"
#include "../../../exception/BadArgument/BadArgument.hpp"

Student::Student(std::string name, std::string cpf, std::string street, std::string neighborhood, std::string city, std::string CEP, std::string fatherName, std::string motherName, unsigned int registrationNumber) : Person(name, cpf, street, neighborhood, city, CEP) // Throws BadArgument
{
    if(fatherName.empty() || motherName.empty())
        throw exception::BadArgument("Todos os parametros devem ser preenchidos!");

    this->fatherName = fatherName;
    this->motherName = motherName;
    this->registrationNumber = registrationNumber;
}

Student::~Student()
{
}

unsigned int Student::getRegistrationNumber()
{
    return this->registrationNumber;
}

std::string Student::getFatherName()
{
    return this->fatherName;
}

std::string Student::getMotherName()
{
    return this->motherName;
}
