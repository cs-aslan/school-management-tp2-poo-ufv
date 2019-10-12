#include "DAOTeacher.hpp"

model::persistence::DAOTeacher::DAOTeacher()
{
    this->teachers = std::list<entity::Teacher>();
}

model::persistence::DAOTeacher::~DAOTeacher()
{
}

void model::persistence::DAOTeacher::insert(std::string name, std::string cpf, std::string street, std::string neighborhood, std::string city, std::string CEP, std::string area, double SalaryPerHour){
    this->teachers.push_front(entity::Teacher(name, cpf, street, neighborhood, city, CEP, area, SalaryPerHour));
}

model::entity::Teacher & model::persistence::DAOTeacher::search(std::string CPF){
    std::list<model::entity::Teacher>::iterator it;
    //return this->teachers.front();
    for (it = this->teachers.begin(); it != this->teachers.end(); it++)
    {
        if(it->getCpf() == CPF) {
            return *it;
        }
    
    }

    throw exception::PersistenceError("Valor nao encontrado no banco!");
}