#include "DAOStudent.hpp"

model::persistence::DAOStudent::DAOStudent()
{
    this->persistence = std::list<entity::Student>();
}

model::persistence::DAOStudent::~DAOStudent()
{
}

void model::persistence::DAOStudent::insert(std::string name, std::string cpf, std::string street, std::string neighborhood, std::string city, std::string CEP, std::string fatherName, std::string motherName, unsigned int registrationNumber){
    this->persistence.push_front(entity::Student(name, cpf, street, neighborhood, city, CEP, fatherName, motherName, registrationNumber));
}

model::entity::Student & model::persistence::DAOStudent::search(std::string CPF){
    std::list<model::entity::Student>::iterator it;

    for (it = this->persistence.begin(); it != this->persistence.end(); it++)
    {
        if(it->getCpf() == CPF) {
            return *it;
        }
    
    }

    throw exception::PersistenceError("Valor nao encontrado no banco!");
}

// void model::persistence::DAOStudent::remove(std::string CPF){
//     std::list<model::entity::Student>::iterator it;

//     for (it = this->persistence.begin(); it != this->persistence.end(); it++)
//     {
//         if(it->getCpf() == CPF) {
//             this->persistence.erase(it);
//             return;
//         }
    
//     }

//     throw exception::PersistenceError("Valor nao encontrado no banco!");
// }

std::list<model::entity::Student>& model::persistence::DAOStudent::getAll(){
    return this-> persistence;
}