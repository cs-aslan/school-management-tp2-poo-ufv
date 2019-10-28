#if !defined(VIEW_REPORTCARD_HPP)
#define VIEW_REPORTCARD_HPP

#include "../../controller/ReportCardController/ReportCardController.hpp"
#include <iostream>
#include <string>
#include <list>

namespace view
{
    namespace reportCard
    {
        std::string createReportCard(controller::SchoolClassController & schoolClassController, controller::StudentController & studentClassController);
    } // namespace aux
    
} // namespace view

#endif // VIEW_REPORTCARD_HPP