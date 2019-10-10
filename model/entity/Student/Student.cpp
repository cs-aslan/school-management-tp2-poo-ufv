using namespace std;

#include "Student.hpp"

Student::Student(string name, string cpf, string street, string neighborhood, string city, string CEP, string fatherName, string motherName, unsigned int registrationNumber) : Person(name, cpf, street, neighborhood, city, CEP)
{
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

string Student::getFatherName()
{
    return this->fatherName;
}

string Student::getMotherName()
{
    return this->motherName;
}
