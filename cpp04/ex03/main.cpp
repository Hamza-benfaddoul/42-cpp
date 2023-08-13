/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 14:59:44 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/08/13 15:12:07hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

void run()
{
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter* me = new Character("me");

		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
        me->unequip(0);

		ICharacter* bob = new Character("bob");

		me->use(0, *bob);
		me->use(1, *bob);

		delete bob;
		delete me;
		delete src;
	}
	std::cout << "-----------------------------------------" << std::endl;

	{
       	IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter* me = new Character("me");

		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);

		tmp = src->createMateria("cure");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);

		tmp = src->createMateria("cure");
		me->equip(tmp);

		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");

		me->use(0, *bob);
		me->use(1, *bob);

		delete bob;
		delete me;
		delete src;

	}

	std::cout << "-----------------------------------------" << std::endl;
	{
		AMateria *m1 = new Ice();
		AMateria *m2 = new Cure();
		AMateria *m3 = new Ice();
		AMateria *m4 = new Cure();
		AMateria *m5 = new Ice();

		ICharacter *c = new Character("foo");
		ICharacter *target = new Character("doo");

		c->equip(m1);
		c->equip(m2);
		c->equip(m3);
		c->equip(m4);
		c->equip(m5);

		for(int i = 0; i < 4; i++)
		 	c->use(i, *target);
        delete c;
        delete target;
	}

	// std::cout << "-----------------------------------------" << std::endl;
	// {
	// 	ICharacter *foo = new Character("foo");
	// 	ICharacter *doo = new Character("doo");


	// 	AMateria *m1 = new Ice();
	// 	AMateria *m2 = new Cure();
	// 	AMateria *m3 = new Ice();
	// 	AMateria *m4 = new Cure();
	// 	AMateria *m5 = new Ice();
		
	// 	foo->equip(m1);
	// 	foo->equip(m2);
	// 	foo->equip(m3);
	// 	foo->equip(m4);
	// 	foo->equip(m5);

	// 	for(int i = 0; i < 4; i++) {
	// 		foo->use(i, *doo);
	// 	}
		
	// 	// foo->unequip(0);
	// 	// foo->unequip(1);
	// 	// foo->unequip(2);
	// 	// foo->unequip(3);

	// 	// foo->equip(m5);
	// 	// foo->equip(m3);
	// 	// for(int i = 0; i < 4; i++) {
	// 	// 	foo->use(i, *doo);
	// 	// }

    //     delete m1;
    //     delete m2;
    //     delete m3;
    //     delete m4;
    //     delete doo;
	// 	delete foo;
	// }

}

int main()
{
    run();
    std::cout << "\n\n\n---------------------[LEAKS]--------------------" << std::endl;
    system("leaks ex03");
    return 0;
}