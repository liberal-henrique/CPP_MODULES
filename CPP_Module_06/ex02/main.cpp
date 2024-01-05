/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:43:39 by lliberal          #+#    #+#             */
/*   Updated: 2024/01/04 18:33:22 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void);
void identify(Base *p);
void identify(Base &p);

int main(void) {

	Base *test = generate();
	std::cout << "Pointer: " << std::endl;
	identify(test);
	std::cout << "Reference: " << std::endl;
	identify(*test);
	delete test;
}

Base *generate(void) {
	std::srand(::time(0));
	int rand1 = std::rand() % 3;

	if (rand1 == 0) {
		std::cout << "The A was chosen." << std::endl;
		return (new A);
	}
	else if (rand1 == 1) {
		std::cout << "The B was chosen." << std::endl;
		return (new B);
	}
	else {
		std::cout << "The C was chosen." << std::endl;
		return (new C);
	}
}

void identify(Base *p) {

	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "C" << std::endl;
}

void identify(Base &p) {

	try {
		A &test = dynamic_cast<A&>(p);
		(void)test;
		std::cout << "A" << std::endl;
	}
	catch(std::exception &e) {}
	try {
		B &test = dynamic_cast<B&>(p);
		(void)test;
		std::cout << "B" << std::endl;
	}
	catch(std::exception &e) {}
	try {
		C &test = dynamic_cast<C&>(p);
		(void)test;
		std::cout << "C" << std::endl;
	}
	catch(std::exception &e) {}
}
