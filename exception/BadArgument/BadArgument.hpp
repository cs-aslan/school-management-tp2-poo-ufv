#if !defined(EXCEPTION_BADARGUMENT_HPP)
#define EXCEPTION_BADARGUMENT_HPP

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

#endif // EXCEPTION_BADARGUMENT_HPP