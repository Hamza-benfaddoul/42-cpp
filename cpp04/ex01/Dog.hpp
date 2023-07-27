/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:20:36 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/07/27 11:57:31 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(const Dog &);
	Dog &operator=(const Dog &);
	~Dog();

private:
	Brain *_brain;
	void makeSound() const;
};

#endif /* DOG_HPP */
