/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 18:25:08 by lliberal          #+#    #+#             */
/*   Updated: 2023/08/11 12:08:15 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main(void) {

    const Animal* j = new Dog();
    const Animal* i = new Cat();
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
    return 0;
}


