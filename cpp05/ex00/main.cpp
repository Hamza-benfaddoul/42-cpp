#include "Bureaucrat.hpp"
int main(void)
{
    try
    {
        Bureaucrat foo("foot", 150);
        foo.incGrade();
        /* do some stuff with bureaucrats */
    }
    catch (std::exception & e)
    {
        /* handle exception */
        std::cout << e.what() << std::endl;
    }
    return 0;
}
