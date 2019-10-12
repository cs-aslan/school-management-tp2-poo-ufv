#if !defined(BADARGUMENT_HPP)
#define BADARGUMENTS_HPP

#include <string>

namespace exception{

    class BadArgument
    {
    private:
        std::string errorMessage;
    public:
        BadArgument(std::string errorMessage);
        ~BadArgument();
        std::string what();
    };

}

#endif // BADARGUMENT_HPP