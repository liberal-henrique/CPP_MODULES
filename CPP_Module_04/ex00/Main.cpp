/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 18:25:08 by lliberal          #+#    #+#             */
/*   Updated: 2023/11/23 10:44:48 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

// int main(void) {

// 	const Animal* meta = new Animal();
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();

// 	const WrongAnimal *test_wrong_animal = new WrongAnimal();
// 	const WrongAnimal *test_cat = new WrongCat();

// 	WrongCat *test_sound_wrong = new WrongCat();

// 	std::cout << j->getType() << " " << std::endl;
// 	std::cout << i->getType() << " " << std::endl;
// 	std::cout << "Cat's sound: ";
// 	i->makeSound();
// 	std::cout << "Dog's sound: ";
// 	j->makeSound();
// 	meta->makeSound();

// 	std::cout << "---------------------------" << std::endl;
// 	std::cout << "WrongAnimal testing" << std::endl;
// 	std::cout << std::endl;
// 	std::cout << test_cat->getType() << " " << std::endl;
// 	std::cout << std::endl;
// 	std::cout << "WrongAnimal's sound: ";
// 	test_wrong_animal->makeSound();
// 	std::cout << "WrongCat's sound: ";
// 	test_cat->makeSound();
// 	std::cout << std::endl;

// 	std::cout << "WrongCat's true sound: ";
// 	static_cast<WrongCat*>(test_sound_wrong)->makeSound();
// 	std::cout << std::endl;

// 	delete test_sound_wrong;
// 	delete test_wrong_animal;
// 	delete test_cat;

// 	delete meta;
// 	delete j;
// 	delete i;

// 	return 0;
// }

int main()
{
	const Animal* meta = new Animal();
	const WrongAnimal* i = new WrongCat();
	// const Animal* j = new Dog();
	
	// std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	
	i->makeSound();
	// j->makeSound();
	
	meta->makeSound();
	
	return 0;
}


