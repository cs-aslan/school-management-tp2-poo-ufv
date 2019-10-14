#include "TeacherViewer.hpp"

void view::teacher::print(controller::TeacherController & teacherController)
{
    std::list<model::entity::Teacher> list = teacherController.getAll();

    std::list<model::entity::Teacher>::iterator it;

    for (it = list.begin(); it != list.end(); it++)
    {
        std::cout << it->toString() << "\n-----------------------------------------------\n";
    
    }
}
    
void view::teacher::insert(controller::TeacherController & teacherController)
{
    try
    {
        std::string salaryPerHourSwap;

        std::cout << "\n-----------------------------------------------\n";

        std::cout << "Insira o nome do professor: ";
        std::string name;
        getline(std::cin, name, '\n');

        std::cout << "Insira o cpf: ";
        std::string cpf;
        getline(std::cin, cpf, '\n');

        std::cout << "Insira a rua: ";
        std::string street;
        getline(std::cin, street, '\n');

        std::cout << "Insira o bairro: ";
        std::string neighborhood;
        getline(std::cin, neighborhood, '\n');

        std::cout << "Insira a cidade: ";
        std::string city;
        getline(std::cin, city, '\n');

        std::cout << "Insira o CEP: ";
        std::string CEP;
        getline(std::cin, CEP, '\n');

        std::cout << "Insira a area de estudo: ";
        std::string area;
        getline(std::cin, area, '\n');

        std::cout << "Insira o salario por hora: ";
        getline(std::cin, salaryPerHourSwap, '\n');
        double salaryPerHour = std::stod(salaryPerHourSwap);

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

    std::cout << "\n-----------------------------------------------\n";
}