

#include "Form.hpp"
#include <string>

Form::Form(): _isSigned(false){}

Form::Form(const Form &other)
    : _name(other._name), _isSigned(other._isSigned),
        _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)
{}

Form &Form::operator=(const Form &other)
{
    _isSigned = other._isSigned;
    return (*this);
}

Form::~Form(){}


std::string Form::getName() const {
    return(_name);
}

int Form::getIsSigned() const {
    return(_isSigned);
}

int Form::getGradeToSign() const {
    return(_gradeToSign);
}

int Form::getGradeToExecute() const {
    return(_gradeToExecute);
}

void    Form::beSigned(Bureaucrat& Bureaucrat) {
	if (Bureaucrat.getGrade() == 1)
		_isSigned = true;
	else
		throw Form::GradeTooLowException();
}

void    Form::signForm(Bureaucrat& Bureaucrat) {
	std::cout << Bureaucrat << " signed " << "form" << std::endl;
}


std::ostream& operator<<(std::ostream &os, Form &form){
	
}

const char* Form::GradeTooHighException::what() const throw() {
   return "Grade too high";
}
const char* Form::GradeTooLowException::what() const throw() {
    return "Grade too low";
}


