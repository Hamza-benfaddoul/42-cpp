/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:14:40 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/10/16 15:21:25by hbenfadd         ###   ########.fr       */
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
    int i = 0;
    std::string forms[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
    while ( i < 3)
    {
        if (form == forms[i])
            break;
        i++;
    }
    
    switch (i)
    {
        case 0:
            std::cout << "Intern creates " << form << std::endl;
            return (new PresidentialPardonForm(target));
        case 1:
            std::cout << "Intern creates " << form << std::endl;
            return (new RobotomyRequestForm(target));
        case 3:
            std::cout << "Intern creates " << form << std::endl;
            return (new ShrubberyCreationForm(target));
    }
    throw FormNotFound();
}

const char* Intern::FormNotFound::what() const throw()
{
    return ("Form not found");
}
