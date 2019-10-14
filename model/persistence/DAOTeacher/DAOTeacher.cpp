#include "DAOTeacher.hpp"

model::persistence::DAOTeacher::DAOTeacher()
{
    this->persistence = std::list<entity::Teacher>();
}

model::persistence::DAOTeacher::~DAOTeacher()
{
}

void model::persistence::DAOTeacher::insert(std::string name, std::string cpf, std::string street, std::string neighborhood, std::string city, std::string CEP, std::string area, double SalaryPerHour){
    this->persistence.push_front(entity::Teacher(name, cpf, street, neighborhood, city, CEP, area, SalaryPerHour));
}

model::entity::Teacher & model::persistence::DAOTeacher::search(std::string CPF){
    std::list<model::entity::Teacher>::iterator it;

    for (it = this->persistence.begin(); it != this->persistence.end(); it++)
    {
        if(it->getCpf() == CPF) {
            return *it;
        }
    
    }

    throw exception::PersistenceError("Valor nao encontrado no banco!");
}

// void model::persistence::DAOTeacher::remove(std::string CPF){
//     std::list<model::entity::Teacher>::iterator it;

//     for (it = this->persistence.begin(); it != this->persistence.end(); it++)
//     {
//         if(it->getCpf() == CPF) {
//             this->persistence.erase(it);
//             return;
//         }
    
//     }

//     throw exception::PersistenceError("Valor nao encontrado no banco!");
// }

std::list<model::entity::Teacher>& model::persistence::DAOTeacher::getAll(){
    return this-> persistence;
}