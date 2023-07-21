/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 16:58:26 by hamza             #+#    #+#             */
/*   Updated: 2023/07/19 17:00:46 by hamza            ###   ########.fr       */
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
  void  makeSound();

protected:
	std::string	_type;
  std::string _sound;
};

#endif /* AMIMAL_HPP */
