

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){}

Bureaucrat::Bureaucrat(std::string name, int grade)
    : _name(name), _grade(grade)
{}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
    : _name(other._name), _grade(other._grade)
{}
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
    _grade = other._grade;
    return (*this);
}

Bureaucrat::~Bureaucrat(){}

void Bureaucrat::incGrade(){
    if (_grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        _grade++;
}

void Bureaucrat::decGrade(){
    if (_grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    else
        _grade--;

}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
   return "Grade too high";
}
const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade too low";
}