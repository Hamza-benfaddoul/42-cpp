
#include "Cat.hpp"


Cat::Cat()
{
  _type = "Cat";
  _sound = "meows meows meows";
  std::cout << "[ Cat ] --> Default constructor called" << std::endl;
}

Cat::Cat(const Cat& other)
  : Animal(other)
{
  *this = other;
  std::cout << "[ Cat ] --> copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
  std::cout << "[ Cat ] --> assignment operator called" << std::endl;
  _type = other._type;
  _sound = other._sound;
  return (*this);
}

Cat::~Cat()
{
  std::cout << "[ Cat ] --> destructor called" << std::endl;
}

