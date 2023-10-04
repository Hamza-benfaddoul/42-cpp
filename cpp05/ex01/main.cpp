
#include "Form.hpp"
#include "Bureaucrat.hpp"

int main(void)
{
    try {

        Bureaucrat foo("foo", 5);
        Form boo("boo", 10);
        boo.beSigned(foo);
        foo.signForm(boo);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return (0);
}
