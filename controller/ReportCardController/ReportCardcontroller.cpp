#include "ReportCardController.hpp"

controller::ReportCardController::ReportCardController(/* args */)
{
}

controller::ReportCardController::~ReportCardController()
{
}

std::string controller::ReportCardController::createReportCard(unsigned int classCode, controller::SchoolClassController & schoolClassController, controller::StudentController & studentController)
{
    std::string toBeReturned = "BOLETIM\n";
    double gradeMean;

    try
    {
        std::list<model::entity::EnrolledStudent> enrolledStudents = schoolClassController.search(classCode).getAllEnrolledStudents();

        std::list<model::entity::EnrolledStudent>::iterator it;

        for (it = enrolledStudents.begin(); it != enrolledStudents.end(); it++)
        {
            gradeMean = 0;

            for (size_t i = 0; i < 4; i++)
            {
                gradeMean += it->getGrades()[i];
            }

            gradeMean /= 4;
            
            toBeReturned += "Nome: " + studentController.search(it->getCPF()).getName() + "\n" +
                            "Matricula: " + std::to_string(studentController.search(it->getCPF()).getRegistrationNumber()) + "\n"
                            "Media de nota: " + std::to_string(gradeMean) + "\n" +
                            "Aprovacao: ";

            if(gradeMean>=60) toBeReturned += "APROVADO";
            else toBeReturned += "REPROVADO";

            toBeReturned += "\n----------------------------------------------\n";
        
        }

        toBeReturned += "----------------------------------------------\n";

    }
    catch(exception::BusinessRule& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(exception::BadArgument& e)
    {
        std::cerr << e.what() << std::endl;
    }

    return toBeReturned;
}