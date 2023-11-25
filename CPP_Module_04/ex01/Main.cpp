/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 18:25:08 by lliberal          #+#    #+#             */
/*   Updated: 2023/11/23 11:38:22 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main(void) {

    const Animal* j = new Dog();
    const Animal* i = new Cat();

    // static_cast<Cat*>(const_cast<Animal*>(i))->getIdeas();
    delete j;
    delete i;


    std::cout << "------------" << std::endl;
    std::cout << "My loop" << std::endl;
    std::cout << std::endl;

    int num = 2;
    Animal* my_array[num];
    std::cout << "Construction moment" << std::endl;
    std::cout << std::endl;
    for (int i = 0; i < num; i++) {
        if (i % 2 == 0)
            my_array[i] = new Dog();
        else
            my_array[i] = new Cat();
        std::cout << "------------" << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Destruction moment" << std::endl;
    std::cout << std::endl;
    for (int i = 0; i < num; i++) {
        delete my_array[i];
    }
    std::cout << "------------" << std::endl;

    std::cout << "Testing Shallow copy" << std::endl;
    std::cout << std::endl;

    Dog basic;
    {
        Dog tmp = basic;
    }

    std::cout << "------------" << std::endl;

    std::cout << "Testing Shallow copy" << std::endl;
    std::cout << std::endl;

    Cat test2;
    {
        Cat temp2 = test2;
    }

    std::cout << "------------" << std::endl;

	std::cout << "Testing Copy" << std::endl;
    std::cout << std::endl;

    Animal tst;
	tst.setType("Rat");

	Animal tst2;
	tst2.setType("Cat");
	
	tst = tst2;

	// Animal tst;
	// tst.setType("Rat");

	// Animal tst2(tst);

	std::cout << "test Type is " << tst2.getType() << std::endl;

	tst.setType("Galinha");
	
	std::cout << "Second test Type is " << tst.getType() << std::endl;


	std::cout << "------------" << std::endl;

	std::cout << "Common test" << std::endl;
    std::cout << std::endl;

	const Animal *here = new Dog();
	const Animal *there = new Cat();

	delete here;
	delete there;

	
    return 0;
}


