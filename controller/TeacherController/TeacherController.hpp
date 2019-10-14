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
    };
    
} // namespace controller


#endif // CONTROLLER_TEACHERCONTROLLER_HPP