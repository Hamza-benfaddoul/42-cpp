
#ifndef FORM_HPP
#define FORM_HPP
# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"
#include <string>


class Form {
    private:
        const std::string _name;
        bool    _isSigned;
        const int   _gradeToSign;
        const int   _gradeToExecute;
    public:
        Form();
        Form(const Form &);
        Form &operator=(const Form &);
        ~Form();
        std::string getName() const ;
        int getIsSigned() const ;
        int getGradeToSign() const ;
        int getGradeToExecute() const ;
        void    beSigned(Bureaucrat );
    /* ---------------- Exception Classes ---------------- */
    class GradeTooHighException : public std::exception {
        public:
            virtual const char* what() const throw();
    };
    class GradeTooLowException : public std::exception {
        public:
            virtual const char* what() const throw();
    };
};



#endif /* FORM_HPP */
