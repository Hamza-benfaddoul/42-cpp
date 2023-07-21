
#include "Animal.hpp"

Animal::Animal()
  : _type("Unknown")
{
  std::cout << "[ Animal ] --> Default constractor called" << std::endl;
}

Animal::Animal(const Animal &other)
{ 
  std::cout << "[ Animal ] --> copy constractor called" << std::endl;
  *this = other;
}

Animal& Animal::operator=(const Animal &other)
{
  std::cout << "[ Animal ] --> assignment operator called" << std::endl;
  _type = other._type;
  return (*this);
}

Animal::~Animal()
{
  std::cout << "[ Animal ] --> Destructor called" << std::endl;
}

void  Animal::makeSound()
{
  std::cout << _type << " make " << _sound << " _sound" << std::endl;
}
