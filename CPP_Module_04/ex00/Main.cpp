/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 18:25:08 by lliberal          #+#    #+#             */
/*   Updated: 2023/08/11 09:57:22 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void) {

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	const WrongAnimal *test_wrong_animal = new WrongAnimal();
	const WrongAnimal *test_cat = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << "Cat's sound: ";
	i->makeSound();
	std::cout << "Dog's sound: ";
	j->makeSound();
	meta->makeSound();

	std::cout
			<< "---------------------------"
			<< std::endl;
	std::cout << test_cat->getType() << " " << std::endl;
	std::cout << "WrongAnimal's sound: ";
	test_wrong_animal->makeSound();
	std::cout << "WrongCat's sound: ";
	test_cat->makeSound();

	delete test_wrong_animal;
	delete test_cat;

	delete meta;
	delete j;
	delete i;

	return 0;
}


