#include "EnrolledStudent.hpp"

model::entity::EnrolledStudent::EnrolledStudent(std::string CPF)  // Throws BadArgument
{
    if(CPF.empty())
        throw exception::BadArgument("Todos os parametros devem ser preenchidos!");

    this->CPF = CPF;
    this->grades = std::vector<double>();
}
        
model::entity::EnrolledStudent::~EnrolledStudent()
{
}