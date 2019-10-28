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

unsigned int model::entity::SchoolClass::getCode()
{
    return this->code;
}

std::string model::entity::SchoolClass::getTeacherCPF()
{
    return this->teacherCPF;
}

unsigned int model::entity::SchoolClass::getYear()
{
    return this->year;
}

std::list<model::entity::EnrolledStudent>& model::entity::SchoolClass::getAllEnrolledStudents()
{
    return this->enrolledStudent;
}

void model::entity::SchoolClass::insertEnrolledStudent(std::string enrolledStudentCPF){
    this->enrolledStudent.push_front(model::entity::EnrolledStudent(enrolledStudentCPF));
}

model::entity::EnrolledStudent & model::entity::SchoolClass::search(std::string enrolledStudentCPF){
    std::list<model::entity::EnrolledStudent>::iterator it;

    for (it = this->enrolledStudent.begin(); it != this->enrolledStudent.end(); it++)
    {
        if(it->getCPF() == enrolledStudentCPF) {
            return *it;
        }
    
    }

    throw exception::PersistenceError("Valor nao encontrado no banco!");
}