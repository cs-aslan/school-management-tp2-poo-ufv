#if !defined(MODEL_PERSISTENCE_DAOTEACHER)
#define MODEL_PERSISTENCE_DAOTEACHER

#include <list>
#include <string>
#include "../../entity/Teacher/Teacher.hpp"
#include "../../../exception/PersistenceError/PersistenceError.hpp"

namespace model
{
    namespace persistence
    {
        class DAOTeacher
        {
        private:
            std::list<entity::Teacher> persistence;
        public:
            DAOTeacher();
            ~DAOTeacher();
            void insert(std::string name, std::string cpf, std::string street, std::string neighborhood, std::string city, std::string CEP, std::string area, double SalaryPerHour);
            entity::Teacher & search(std::string CPF);
            // void remove(std::string CPF);
        };
        
    } // namespace persistence
    
} // namespace model

#endif // MODEL_PERSISTENCE_DAOTEACHER