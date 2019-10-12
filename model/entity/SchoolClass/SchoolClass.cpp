#include "SchoolClass.hpp"

model::entity::SchoolClass::SchoolClass(unsigned int code, unsigned int year, std::string teacherCPF) // Throws BadArgument
{
    if (teacherCPF.empty())
        throw exception::BadArgument("Todos os parametros devem ser preenchidos!");

    this->teacherCPF = teacherCPF;
    this->year = year;
    this->code = code;
    this->enrolledStudent = std::list<EnrolledStudent>();
}

model::entity::SchoolClass::~SchoolClass()
{
}