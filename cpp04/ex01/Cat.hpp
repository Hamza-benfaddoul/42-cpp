/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:20:40 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/07/27 12:00:33 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
public:
	Cat();
	Cat(const Cat &);
	Cat &operator=(const Cat &);
	~Cat();

private:
	Brain *_brain;
	void makeSound() const;
};

#endif /* CAT_HPP */
