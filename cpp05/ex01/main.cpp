
#include "Form.hpp"
#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat foo("foo", 1);
	Form boo("boo", 10);
    boo.beSigned(foo);
    foo.signForm(boo);

    return (0);
}
