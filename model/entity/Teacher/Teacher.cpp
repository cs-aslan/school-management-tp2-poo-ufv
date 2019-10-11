using namespace std;

#include "Teacher.hpp"
#include "../../../exception/BadArgument/BadArgument.hpp"

Teacher::Teacher(string name, string cpf, string street, string neighborhood, string city, string CEP, string area, double salaryPerHour): Person(name, cpf, street, neighborhood, city, CEP) // Throws BadArgument
{
    if(area.empty())
        throw BadArgument("Todos os parametros devem ser preenchidos!");

    this->area = area;
    this->salaryPerHour = salaryPerHour;
}

Teacher::~Teacher()
{
}

string Teacher::getArea()
{
    return this->area;
}

double Teacher::getSalaryPerHour()
{
    return this->salaryPerHour;
}

string Teacher::toString(){
    return Person::toString() + "\n" +
            "Área de estudos: " + this->area + "\n" +
            "Salário por hora: " + to_string(this->salaryPerHour);
}


void Teacher::setArea(string area) // Throws BadArgument
{
    if(area.empty())
        throw BadArgument("Todos os parametros devem ser preenchidos!");

    this->area = area;
}

void Teacher::setSalaryPerHour(double salaryPerHour) // Throws BadArgument
{
    this->salaryPerHour = salaryPerHour;
}
