#include <iostream>
#include <string>

#include "exception/BadArgument/BadArgument.hpp"
#include "exception/PersistenceError/PersistenceError.hpp"
#include "exception/BusinessRule/BusinessRule.hpp"

#include "controller/TeacherController/TeacherController.hpp"
#include "controller/StudentController/StudentController.hpp"
#include "controller/SchoolClassController/SchoolClassController.hpp"

#include "view/MainViewer/MainViewer.hpp"
#include "view/TeacherViewer/TeacherViewer.hpp"
#include "view/StudentViewer/StudentViewer.hpp"

int main(int argc, char const *argv[])
{
    controller::SchoolClassController schoolClassController = controller::SchoolClassController();
    controller::TeacherController teacherController = controller::TeacherController();
    controller::StudentController studentController = controller::StudentController();

    std::cout << view::main::mainMenu();

    int selectionMainMenu;
    std::cin >> selectionMainMenu;

    while (1)
    {
        switch (selectionMainMenu)
        {
        case 0:
            std::cout << view::main::mainMenu();
            break;

        case 1:
            /* code */
            break;
        
        case 9:
            std::cout << "Obrigado!\n";
            return 0;

        default:
            std::cout << view::main::reShowMenu();
            break;
        }

        std::cin >> selectionMainMenu;
    }
    
    return 0;
}