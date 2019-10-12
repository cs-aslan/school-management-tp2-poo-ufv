#if !defined(MODEL_ENTITY_PERSON_HPP)
#define MODEL_ENTITY_PERSON_HPP

#include "../../../exception/BadArgument/BadArgument.hpp"
#include <iostream>
#include <string>

namespace model{
    namespace entity {

        class Person
        {
        private:
            std::string name;
            std::string cpf;

            std::string street;
            std::string neighborhood;
            std::string city;
            std::string CEP;

            // Birth date
            
        public:
            Person(std::string name, std::string cpf, std::string street, std::string neighborhood, std::string city, std::string CEP); // Throws BadArgument
            ~Person();

            std::string getName();
            std::string getCpf();
            std::string getStreet();
            std::string getNeighborhood();
            std::string getCity();
            std::string getCEP();
            std::string toString();

            void setStreet(std::string street); // Throws BadArgument
            void setNeighborhood(std::string neighborhood); // Throws BadArgument
            void setCity(std::string city); // Throws BadArgument
            void setCEP(std::string CEP); // Throws BadArgument

        };

    } // namespace entity
    
} // namespace model

#endif // MODEL_ENTITY_PERSON_HPP