#include <iostream>
#include <string>

#include "controller/TeacherController/TeacherController.hpp"
#include "controller/StudentController/StudentController.hpp"
#include "controller/SchoolClassController/SchoolClassController.hpp"

#include "view/MainViewer/MainViewer.hpp"
#include "view/TeacherViewer/TeacherViewer.hpp"
#include "view/StudentViewer/StudentViewer.hpp"
#include "view/SchoolClassViewer/SchoolClassViewer.hpp"
#include "view/ReportCardViewer/ReportCardViewer.hpp"

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
                view::student::insert(studentController);
                break;

            case 2:
                view::student::print(studentController);
                break;
            
            case 3:
                view::student::setStreet(studentController);
                break;

            case 4:
                view::student::setNeighborhood(studentController);
                break;

            case 5:
                view::student::setCity(studentController);
                break;

            case 6:
                view::student::setCEP(studentController);
                break;

            case 9:
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
                view::teacher::insert(teacherController);
                break;

            case 2:
                view::teacher::print(teacherController);
                break;

            case 3:
                view::teacher::setStreet(teacherController);
                break;

            case 4:
                view::teacher::setNeighborhood(teacherController);
                break;

            case 5:
                view::teacher::setCity(teacherController);
                break;

            case 6:
                view::teacher::setCEP(teacherController);
                break;

            case 7:
                view::teacher::setArea(teacherController);
                break;

            case 8:
                view::teacher::setSalaryPerHour(teacherController);
                break;

            case 9:
                break;
            
            default:
                std::cout << "Opcao invalida, voltando ao menu principal...\n";
                break;
            }

            std::cout << view::main::reShowMenu();
            break;

        case 3:

            std::cout << view::schoolClass::menu();

            getline(std::cin, selectionSubMenuAux, '\n');
            selectionSubMenu = stoi(selectionSubMenuAux);

            switch (selectionSubMenu)
            {

            case 1:
                view::schoolClass::insert(schoolClassController, teacherController);
                break;

            case 2:
                view::schoolClass::print(schoolClassController);
                break;

            case 3:
                view::schoolClass::insertEnrolledStudent(schoolClassController, studentController);
                break;

            case 4:
                view::schoolClass::setGrade(schoolClassController);
                break;
            
            default:
                std::cout << "Opcao invalida, voltando ao menu principal...\n";
                break;
            }

            std::cout << view::main::reShowMenu();
            break;

        case 4:
            view::reportCard::createReportCard(schoolClassController, studentController);
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