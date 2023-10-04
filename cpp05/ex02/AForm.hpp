
#ifndef FORM_HPP
#define FORM_HPP

# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"
# include <ostream>
# include <string>


class AForm {
    private:
        const std::string   _name;
        bool                _isSigned;
        const int           _gradeToSign;
        const int           _gradeToExecute;

    public:
        AForm();
        AForm(std::string name, int gradeToSing);
        AForm(const Form &);
        AForm &operator=(const Form &);
        ~AForm();

        std::string getName() const ;
        int         getIsSigned() const ;
        int         getGradeToSign() const ;
        int         getGradeToExecute() const ;

        void    beSigned(Bureaucrat& Bureaucrat);

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

std::ostream&    operator<<(std::ostream& os, AForm& rhs);

#endif /* FORM_HPP */
