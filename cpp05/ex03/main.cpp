/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 09:47:52 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/10/13 07:37:32 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "Intern.hpp"

int main(void)
{
	try {
		Intern someRandomIntern;

		{
			AForm* rrf;
			rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		}
		{
			try {

				AForm* rrf;
				rrf = someRandomIntern.makeForm("robotomyrequest", "Bender");
			}
				catch (std::exception &e) {
			std::cout << e.what() << std::endl;
			}
		}
		{
			AForm* rrf;
			rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		}
	}
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return (0);
}
