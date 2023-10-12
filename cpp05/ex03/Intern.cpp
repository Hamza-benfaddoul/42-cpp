/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:14:40 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/10/12 15:52:03 by hbenfadd         ###   ########.fr       */
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
    if (form == "presidential pardon")
        return (new PresidentialPardonForm(target));
    else if (form == "robotomy request")
        return (new RobotomyRequestForm(target));
    else if (form == "shrubbery creation")
        return (new ShrubberyCreationForm(target));
    else
        throw FormNotFound();
}

const char* Intern::FormNotFound::what() const throw()
{
    return ("Form not found");
}
