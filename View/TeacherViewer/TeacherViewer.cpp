#include "TeacherViewer.hpp"

void view::teacher::print(controller::TeacherController & teacherController)
{
    std::list<model::entity::Teacher> list = teacherController.getAll();

    std::list<model::entity::Teacher>::iterator it;

    for (it = list.begin(); it != list.end(); it++)
    {
        std::cout << it->toString();
    
    }
}
    
void view::teacher::insert(controller::TeacherController & teacherController)
{
    try
    {
        std::cout << "\nInsira o nome do professor: ";
        std::string name;
        std::cin >> name;

        std::cout << "\nInsira o cpf: ";
        std::string cpf;
        std::cin >> cpf;

        std::cout << "\nInsira a rua: ";
        std::string street;
        std::cin >> street;

        std::cout << "\nInsira o bairro: ";
        std::string neighborhood;
        std::cin >> neighborhood;

        std::cout << "\nInsira a cidade: ";
        std::string city;
        std::cin >> city;

        std::cout << "\nInsira o CEP: ";
        std::string CEP;
        std::cin >> CEP;

        std::cout << "\nInsira a area de estudo: ";
        std::string area;
        std::cin >> area;

        std::cout << "\nInsira o salario por hora: ";
        double salaryPerHour;
        std::cin >> salaryPerHour;

        teacherController.insert(name, cpf, street, neighborhood, city, CEP, area, salaryPerHour);
    }
    catch(exception::BusinessRule& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(exception::BadArgument& e)
    {
        std::cerr << e.what() << std::endl;
    }
}