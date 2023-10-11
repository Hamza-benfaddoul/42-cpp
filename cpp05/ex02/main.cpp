/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 09:47:52 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/10/11 11:06:30 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
    try {
        //AForm *form1 = new RobotomyRequestForm("RobotomyRequestForm");
       // AForm *form2 = new PresidentialPardonForm("PresidentialPardonForm");
        AForm *form3 = new ShrubberyCreationForm("ShrubberyCreationForm");
        Bureaucrat *bureaucrat = new Bureaucrat("Bureaucrat", 1);
        
        //bureaucrat->signForm(*form1);
       // bureaucrat->signForm(*form2);
        //bureaucrat->signForm(*form3);
        //bureaucrat->executeForm(*form1);
        //bureaucrat->executeForm(*form2);
        //bureaucrat->execute(*form3);
        //form3->beSigned(*bureaucrat);
        form3->execute(*bureaucrat);

        //bureaucrat->executeForm(*form1);
        delete bureaucrat;
        //delete form1;
        //delete form2;
        //delete form3;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return (0);
}
