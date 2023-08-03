/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 16:58:26 by hamza             #+#    #+#             */
/*   Updated: 2023/08/03 16:09:49 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMIMAL_HPP
# define AMIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
public:
	Animal();
	Animal(const Animal& other);
	Animal &operator=(const Animal& other);
	~Animal();
	virtual void makeSound() const;
	std::string getType() const;

protected:
	std::string	_type;
};

#endif /* AMIMAL_HPP */
