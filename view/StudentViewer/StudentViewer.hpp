#if !defined(VIEW_STUDENTVIEWER_HPP)
#define VIEW_STUDENTVIEWER_HPP

#include <iostream>
#include <string>
#include <list>
#include "../AuxViewer/AuxViewer.hpp"
#include "../../controller/StudentController/StudentController.hpp"

namespace view
{
    namespace student
    {
        std::string menu();
        void print(controller::StudentController & controller);
        void insert(controller::StudentController & controller);

        void setStreet(controller::StudentController & controller);
        void setNeighborhood(controller::StudentController & controller);
        void setCity(controller::StudentController & controller);
        void setCEP(controller::StudentController & controller);
    }

}

#endif // VIEW_STUDENTVIEWER_HPP