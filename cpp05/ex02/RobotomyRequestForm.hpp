/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:41:24 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/10/12 14:16:57 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <string>
#include <fstream>
# include "AForm.hpp"
class Bureaucrat;

class RobotomyRequestForm : public AForm {
    private:
        std::string _target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm &);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &);
        ~RobotomyRequestForm();

        std::string getTarget() const;

        virtual void execute(Bureaucrat const & executor) const;
};

#endif /* ROBOTOMYREQUESTFORM_HPP */