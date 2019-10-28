#if !defined(CONTROLLER_SCHOOLCLASSCONTROLLER_HPP)
#define CONTROLLER_SCHOOLCLASSCONTROLLER_HPP

#include <string>
#include "../../model/persistence/DAOSchoolClass/DAOSchoolClass.hpp"

#include "../../exception/PersistenceError/PersistenceError.hpp"
#include "../../exception/BusinessRule/BusinessRule.hpp"

#include "../TeacherController/TeacherController.hpp"
#include "../StudentController/StudentController.hpp"

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
        std::list<model::entity::SchoolClass>& getAll();
        
        model::entity::SchoolClass& search(unsigned int code);
        model::entity::EnrolledStudent& searchEnrolledStudent(unsigned int code, std::string enrolledStudentCPF);

        void insertEnrolledStudent(unsigned int code, std::string enrolledStudentCPF, controller::StudentController &studentController);
        void setGradeEnrolledStudent(unsigned int code, std::string enrolledStudentCPF, double gradeValue, int gradeNumber);
    };
}

#endif // CONTROLLER_SCHOOLCLASSCONTROLLER_HPP
