#include "DAOSchoolClass.hpp"

model::persistence::DAOSchoolClass::DAOSchoolClass()
{
    this->persistence = std::list<entity::SchoolClass>();
}

model::persistence::DAOSchoolClass::~DAOSchoolClass()
{
}

void model::persistence::DAOSchoolClass::insert(unsigned int code, unsigned int year, std::string teacherCPF){
    this->persistence.push_front(entity::SchoolClass(code, year, teacherCPF));
}

model::entity::SchoolClass & model::persistence::DAOSchoolClass::search(unsigned int code){
    std::list<model::entity::SchoolClass>::iterator it;

    for (it = this->persistence.begin(); it != this->persistence.end(); it++)
    {
        if(it->getCode() == code) {
            return *it;
        }
    
    }

    throw exception::PersistenceError("Valor nao encontrado no banco!");
}

std::list<model::entity::SchoolClass>& model::persistence::DAOSchoolClass::getAll(){
    return this-> persistence;
}

void model::persistence::DAOSchoolClass::insertEnrolledStudent(unsigned int code, std::string enrolledStudentCPF){
    this->search(code).insertEnrolledStudent(enrolledStudentCPF);
}