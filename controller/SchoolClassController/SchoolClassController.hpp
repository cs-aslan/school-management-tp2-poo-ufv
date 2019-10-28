#if !defined(CONTROLLER_SCHOOLCLASSCONTROLLER_HPP)
#define CONTROLLER_SCHOOLCLASSCONTROLLER_HPP

#include <string>
#include "../../model/persistence/DAOSchoolClass/DAOSchoolClass.hpp"

#include "../../exception/PersistenceError/PersistenceError.hpp"
#include "../../exception/BusinessRule/BusinessRule.hpp"

#include "../TeacherController/TeacherController.hpp"

namespace controller
{
    class SchoolClassController
    {
    private:
        model::persistence::DAOSchoolClass persistence;
        unsigned int lastRegistrationNumber;
    public:
        SchoolClassController();
        ~SchoolClassController();
        void insert(unsigned int year, std::string teacherCPF, controller::TeacherController &teacherController);
    };
}

#endif // CONTROLLER_SCHOOLCLASSCONTROLLER_HPP
