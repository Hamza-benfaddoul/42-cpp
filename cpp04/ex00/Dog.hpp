/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:24:30 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/08/03 16:01:53 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(const Dog &);
	Dog &operator=(const Dog &);
	~Dog();
	void makeSound() const;

private:
	std::string _sound;
};

#endif /* DOG_HPP */
