/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 18:25:08 by lliberal          #+#    #+#             */
/*   Updated: 2023/08/11 13:40:56 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main(void) {

    Cat* dog = new Cat();

    // AAnimal testing = AAnimal();
    AAnimal *dog3 = new Cat();


    static_cast<Cat*>(dog3)->setIdea("Pq eu nao sou um cao?");
    static_cast<Cat*>(dog3)->getIdeas();

    dog->setIdea("I WANT To DUCK");
    dog->getIdeas();
    std::cout << "----------------" << std::endl;

    Cat* dog2 = new Cat(*dog);
    std::cout << std::endl;
    dog2->setIdea("But i dont!");
    std::cout << dog2->getType() << std::endl;
    std::cout << std::endl;
    dog->getIdeas();
    std::cout << std::endl;
    dog2->getIdeas();
    std::cout << std::endl;

    delete dog;
    delete dog2;
    return 0;
}


