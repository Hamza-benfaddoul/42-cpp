/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:14:40 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/10/13 07:34:26 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(Intern const & src)
{
    *this = src;
}

Intern::~Intern()
{
}

Intern & Intern::operator=(Intern const & rhs)
{
    (void)rhs;
    return (*this);
}

AForm * Intern::makeForm(std::string form, std::string target)
{
    AForm *formPtr;
    if (form == "presidential pardon")
        formPtr = new PresidentialPardonForm(target);
    else if (form == "robotomy request")
        formPtr = new RobotomyRequestForm(target);
    else if (form == "shrubbery creation")
        formPtr = new ShrubberyCreationForm(target);
    else
        throw FormNotFound();
    std::cout << "Intern creates " << form << std::endl;
    return (formPtr);
}

const char* Intern::FormNotFound::what() const throw()
{
    return ("Form not found");
}
