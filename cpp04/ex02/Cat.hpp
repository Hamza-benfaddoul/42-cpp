/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:24:37 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/08/03 17:19:33 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat: public AAnimal
{
public:
	Cat();
	Cat(const Cat &);
	Cat &operator=(const Cat &);
	~Cat();
	void makeSound() const;

private:
	std::string _sound;
	Brain		*_brain;
};

#endif /* CAT_HPP */
