/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:50:55 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/10/11 11:06:10 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
    : AForm("Shrubbery Creation", 145, 137), target_(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
    : AForm(other), target_(other.target_) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
    if (this != &other) {
        AForm::operator=(other);
        target_ = other.target_;
    }
    return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const {
    if (this->getIsSigned() == false)
        throw AForm::FormNotSignedException();
    else if (executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();
    else {
        std::ofstream outfile(target_ + "_shrubbery");
        outfile << "      /\\\n"
                << "     /\\*\\\n"
                << "    /\\O\\*\\\n"
                << "   /*/\\/\\/\\\n"
                << "  /\\O\\/\\*\\/\\\n"
                << " /\\*\\/\\*\\/\\/\\\n"
                << "/\\O\\/\\/*/\\/O/\\\n"
                << "      ||\n"
                << "      ||\n"
                << "      ||\n";
        outfile.close();
    }
}