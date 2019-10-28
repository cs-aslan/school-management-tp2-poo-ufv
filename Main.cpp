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

    std::string selectionMainMenuAux;
    std::string selectionSubMenuAux;

    int selectionMainMenu;
    int selectionSubMenu;

    while (1)
    {
        getline(std::cin, selectionMainMenuAux, '\n');
        selectionMainMenu = stoi(selectionMainMenuAux);

        switch (selectionMainMenu)
        {
        case 0:
            std::cout << view::main::mainMenu();
            break;

        case 1:
            
            std::cout << view::student::menu();

            getline(std::cin, selectionSubMenuAux, '\n');
            selectionSubMenu = stoi(selectionSubMenuAux);

            switch (selectionSubMenu)
            {

            case 1:
                try
                {
                    view::student::insert(studentController);
                }
                catch(const std::exception& e)
                {
                    std::cerr << e.what() << '\n';
                }
                break;

            case 2:
                view::student::print(studentController);
                break;
            
            default:
                std::cout << "Opcao invalida, voltando ao menu principal...\n";
                break;
            }
            std::cout << view::main::reShowMenu();
            break;
        
        case 2:

            std::cout << view::teacher::menu();

            getline(std::cin, selectionSubMenuAux, '\n');
            selectionSubMenu = stoi(selectionSubMenuAux);

            switch (selectionSubMenu)
            {

            case 1:
                try
                {
                    view::teacher::insert(teacherController);
                }
                catch(const std::exception& e)
                {
                    std::cerr << e.what() << '\n';
                }
                break;

            case 2:
                view::teacher::print(teacherController);
                break;
            
            default:
                std::cout << "Opcao invalida, voltando ao menu principal...\n";
                break;
            }
            std::cout << view::main::reShowMenu();
            break;
        case 9:
            std::cout << "Obrigado!\n";
            return 0;

        default:
            std::cout << view::main::reShowMenu();
            break;
        }

    }
    
    return 0;
}