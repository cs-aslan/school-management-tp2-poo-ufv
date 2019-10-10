using namespace std;

#include "Teacher.hpp"

Teacher::Teacher(string name, string cpf, string street, string neighborhood, string city, string CEP, string area, double salaryPerHour): Person(name, cpf, street, neighborhood, city, CEP)
{
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


void Teacher::setArea(string Area)
{
    this->area = area;
}

void Teacher::setSalaryPerHour(double salaryPerHour)
{
    this->salaryPerHour = salaryPerHour;
}
