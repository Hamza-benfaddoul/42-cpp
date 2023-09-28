#include "Bureaucrat.hpp"
int main(void)
{
    try
    {
        Bureaucrat foo("foot", 10);
        foo.incGrade();
		std::cout << foo << std::endl;
        /* do some stuff with bureaucrats */
    }
    catch (std::exception & e)
    {
        /* handle exception */
        std::cout << e.what() << std::endl;
    }
    return 0;
}
