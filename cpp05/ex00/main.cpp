/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 07:45:32 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/10/13 11:15:18 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
int main(void)
{
    try
    {
        Bureaucrat foo("foo", 10);
        //Bureaucrat bar("bar", 151);
        //Bureaucrat zoo("zoo", 0);
        foo.incGrade();
		std::cout << foo.getGrade() << std::endl;
        /* do some stuff with bureaucrats */
    }
    catch (std::exception & e)
    {
        /* handle exception */
        std::cout << e.what() << std::endl;
    }
    return 0;
}
