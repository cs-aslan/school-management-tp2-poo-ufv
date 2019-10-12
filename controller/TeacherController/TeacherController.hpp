#include <string>
#include "../../model/persistence/DAOTeacher/DAOTeacher.hpp"

namespace controller
{
    class TeacherController
    {
    private:
        model::persistence::DAOTeacher persistence;
    public:
        TeacherController(/* args */);
        ~TeacherController();
    };
    
} // namespace controller
