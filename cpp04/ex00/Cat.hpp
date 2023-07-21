
#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat: public Animal
{
public:
	Cat();
	Cat(const Cat &);
	Cat &operator=(const Cat &);
	~Cat();

private:
	
};


#endif /* CAT_HPP */

