/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:24:30 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/08/03 17:18:51 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
public:
	Dog();
	Dog(const Dog &);
	Dog &operator=(const Dog &);
	~Dog();
	void makeSound() const;

private:
	std::string _sound;
	Brain		*_brain;
};

#endif /* DOG_HPP */
