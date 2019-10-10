#if !defined(BADCPF_HPP)
#define BADCPF_HPP

using namespace std;
#include <exception>
#include <string>

class BadCpf : public exception
{
private:
    /* data */
public:
    BadCpf(/* args */);
    ~BadCpf();
    string who();
};

#endif // BADCPF_HPP
