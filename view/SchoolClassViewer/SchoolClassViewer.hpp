#if !defined(VIEW_SCHOOLCLASSVIEWER_HPP)
#define VIEW_SCHOOLCLASSVIEWER_HPP

#include <iostream>
#include <string>
#include <list>
#include "../AuxViewer/AuxViewer.hpp"
#include "../../controller/SchoolClassController/SchoolClassController.hpp"

namespace view
{
    namespace schoolClass
    {
        std::string menu();
        void print(controller::SchoolClassController & controller);
        void insert(controller::SchoolClassController & controller, controller::TeacherController & teacherController);
    }

}

#endif // VIEW_SCHOOLCLASSVIEWER_HPP