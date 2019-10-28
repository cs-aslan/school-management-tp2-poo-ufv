#if !defined(CONTROLLER_STUDENTCONTROLLER_HPP)
#define CONTROLLER_STUDENTCONTROLLER_HPP

#include <string>
#include "../../model/persistence/DAOStudent/DAOStudent.hpp"

#include "../../exception/PersistenceError/PersistenceError.hpp"
#include "../../exception/BusinessRule/BusinessRule.hpp"

namespace controller
{
    class StudentController
    {
    private:
        model::persistence::DAOStudent persistence;
        unsigned int lastRegistrationNumber;
    public:
        StudentController();
        ~StudentController();
        void insert(std::string name, std::string cpf, std::string street, std::string neighborhood, std::string city, std::string CEP, std::string fatherName, std::string motherName);
        std::list<model::entity::Student>& getAll();

        model::entity::Student& search(std::string cpf);
        
        void setStreet(std::string cpf, std::string street); // Throws BadArgument, Persistence Error
        void setNeighborhood(std::string cpf, std::string neighborhood); // Throws BadArgument, Persistence Error
        void setCity(std::string cpf, std::string city); // Throws BadArgument, Persistence Error
        void setCEP(std::string cpf, std::string CEP); // Throws BadArgument, Persistence Error
        void setActive(std::string cpf, bool active); // Throws Persistence Error

    };
    
} // namespace controller


#endif // CONTROLLER_STUDENTCONTROLLER_HPP