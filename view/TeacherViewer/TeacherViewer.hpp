#if !defined(VIEW_TEACHERVIEWR_HPP)
#define VIEW_TEACHERVIEWR_HPP

#include <iostream>
#include <string>
#include <list>
#include "../AuxViewer/AuxViewer.hpp"
#include "../../controller/TeacherController/TeacherController.hpp"

namespace view
{
    namespace teacher
    {
        std::string menu();
        void print(controller::TeacherController & teacherController);
        void insert(controller::TeacherController & teacherController);

        void setStreet(controller::TeacherController & controller);
        void setNeighborhood(controller::TeacherController & controller);
        void setCity(controller::TeacherController & controller);
        void setCEP(controller::TeacherController & controller);

        void setArea(controller::TeacherController & controller);
        void setSalaryPerHour(controller::TeacherController & controller);
    }

}

#endif // VIEW_TEACHERVIEWR_HPP