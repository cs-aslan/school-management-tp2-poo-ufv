#include "TeacherViewer.hpp"


void view::teacher::printTeachers(controller::TeacherController teacherController){
    std::list<model::entity::Teacher> list = teacherController.getAll();

    std::list<model::entity::Teacher>::iterator it;

    for (it = list.begin(); it != list.end(); it++)
    {
        std::cout << it->toString();
    
    }
}
    
