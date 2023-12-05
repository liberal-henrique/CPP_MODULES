/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 11:48:47 by lliberal          #+#    #+#             */
/*   Updated: 2023/12/04 10:33:10 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MateriaSource.hpp"
# include "Ice.hpp"
# include "Cure.hpp"
# include "Character.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();

	std::cout << "------------------------" << std::endl;
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

	std::cout << "Character is being created" << std::endl;
    ICharacter *me = new Character("me");
	std::cout << "------------------------" << std::endl;
    AMateria *tmp;
	std::cout << "------------------------" << std::endl;
	std::cout << "1" << std::endl;
	
    tmp = src->createMateria("ice");
    me->equip(tmp);
    me->equip(tmp);
    me->equip(tmp);
    me->equip(tmp);

	std::cout << "------------------------" << std::endl;
	// std::cout << "2" << std::endl;
    // tmp = src->createMateria(NULL);
    // me->equip(tmp);
	// std::cout << "------------------------" << std::endl;
	// std::cout << "3" << std::endl;
	// tmp = src->createMateria("cure");
    // me->equip(tmp);
	// std::cout << "------------------------" << std::endl;
	// std::cout << "4" << std::endl;
	// tmp = src->createMateria("cure");
    // me->equip(tmp);
	// std::cout << "------------------------" << std::endl;
	// std::cout << "5" << std::endl;
	// tmp = src->createMateria("cure");
	// me->equip(tmp);
	// std::cout << "************************" << std::endl;
	// std::cout << "------------------------" << std::endl;
	// std::cout << "6" << std::endl;
	// tmp = src->createMateria("cure");
	// me->equip(tmp);
	// std::cout << "************************" << std::endl;
    // ICharacter* bob = new Character("bob");
	// std::cout << "------------------------" << std::endl;
    // me->use(0, *bob);
	// std::cout << "------------------------" << std::endl;
	// me->use(0, *bob);
	// std::cout << "------------------------" << std::endl;

    // delete bob;
    delete me;
    delete src;
    return 0;
}

// int main()
// {
// 	IMateriaSource* src = new MateriaSource();
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());
// 	ICharacter* me = new Character("me");
// 	AMateria* tmp;
// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);
// 	ICharacter* bob = new Character("bob");
// 	me->use(0, *bob);
// 	me->use(1, *bob);
// 	delete bob;
// 	delete me;
// 	delete src;
// 	return 0;
// }