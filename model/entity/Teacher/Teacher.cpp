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