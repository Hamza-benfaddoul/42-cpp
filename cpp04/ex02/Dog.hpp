/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:20:36 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/07/28 19:02:57 by hbenfadd         ###   ########.fr       */
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

private:
	Brain *_brain;
	void makeSound() const;
};

#endif /* DOG_HPP */
