/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 11:48:47 by lliberal          #+#    #+#             */
/*   Updated: 2023/09/27 20:35:56 by lliberal         ###   ########.fr       */
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

    ICharacter *me = new Character("me");
    AMateria *tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
	std::cout << "------------------------" << std::endl;
	me->unequip(1);
	std::cout << "------------------------" << std::endl;
    // ICharacter* bob = new Character("bob");
    // me->use(0, *bob);
    // me->use(1, *bob);
    // delete bob;
    delete me;
    delete src;
    return 0;
}