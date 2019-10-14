#if !defined(CONTROLLER_TEACHERCONTROLLER_HPP)
#define CONTROLLER_TEACHERCONTROLLER_HPP

#include <string>
#include "../../model/persistence/DAOTeacher/DAOTeacher.hpp"

#include "../../exception/PersistenceError/PersistenceError.hpp"
#include "../../exception/BusinessRule/BusinessRule.hpp"

namespace controller
{
    class TeacherController
    {
    private:
        model::persistence::DAOTeacher persistence;
    public:
        TeacherController();
        ~TeacherController();
        void insert(std::string name, std::string cpf, std::string street, std::string neighborhood, std::string city, std::string CEP, std::string area, double SalaryPerHour);
        std::list<model::entity::Teacher>& getAll();

        
        void setStreet(std::string cpf, std::string street); // Throws BadArgument, Persistence Error
        void setNeighborhood(std::string cpf, std::string neighborhood); // Throws BadArgument, Persistence Error
        void setCity(std::string cpf, std::string city); // Throws BadArgument, Persistence Error
        void setCEP(std::string cpf, std::string CEP); // Throws BadArgument, Persistence Error
        void setActive(std::string cpf, bool active); // Throws Persistence Error

    };
    
} // namespace controller


#endif // CONTROLLER_TEACHERCONTROLLER_HPP