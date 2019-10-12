// using namespace std;

#include "Teacher.hpp"
#include "../../../exception/BadArgument/BadArgument.hpp"

Teacher::Teacher(std::string name, std::string cpf, std::string street, std::string neighborhood, std::string city, std::string CEP, std::string area, double salaryPerHour): Person(name, cpf, street, neighborhood, city, CEP) // Throws BadArgument
{
    if(area.empty())
        throw exception::BadArgument("Todos os parametros devem ser preenchidos!");

    this->area = area;
    this->salaryPerHour = salaryPerHour;
}

Teacher::~Teacher()
{
}

std::string Teacher::getArea()
{
    return this->area;
}

double Teacher::getSalaryPerHour()
{
    return this->salaryPerHour;
}

std::string Teacher::toString(){
    return Person::toString() + "\n" +
            "Área de estudos: " + this->area + "\n" +
            "Salário por hora: " + std::to_string(this->salaryPerHour);
}


void Teacher::setArea(std::string area) // Throws exception::BadArgument
{
    if(area.empty())
        throw exception::BadArgument("Todos os parametros devem ser preenchidos!");

    this->area = area;
}

void Teacher::setSalaryPerHour(double salaryPerHour) // Throws exception::BadArgument
{
    this->salaryPerHour = salaryPerHour;
}
