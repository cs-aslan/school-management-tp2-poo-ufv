#if !defined(MODEL_PERSISTENCE_DAOSTUDENT)
#define MODEL_PERSISTENCE_DAOSTUDENT

#include <list>
#include <string>
#include "../../../model/entity/Student/Student.hpp"
#include "../../../exception/PersistenceError/PersistenceError.hpp"

namespace model
{
    namespace persistence
    {
        class DAOStudent
        {
        private:
            std::list<model::entity::Student> persistence;
        public:
            DAOStudent();
            ~DAOStudent();
            void insert(std::string name, std::string cpf, std::string street, std::string neighborhood, std::string city, std::string CEP, std::string fatherName, std::string motherName, unsigned int registrationNumber);
            entity::Student & search(std::string CPF);
            std::list<model::entity::Student>& getAll();
        };
        
    } // namespace persistence
    
} // namespace model

#endif // MODEL_PERSISTENCE_DAOSTUDENT