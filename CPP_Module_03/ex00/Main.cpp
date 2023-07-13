/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:56:49 by lliberal          #+#    #+#             */
/*   Updated: 2023/07/13 17:34:19 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Animal {

	public:
		Animal() : patas(0) {}
		Animal(std::string tipo) : tipo(tipo) {}
		~Animal();

		virtual void eating(void) = 0;
		int			getPatas(void);
		void		setPatas(int patas);
		std::string	getTipo(void);
		void		setTipo(std::string type);

	private:
		int 		patas;
		std::string tipo;
};

class Cachorro : public Animal
{
	public:
		void	eating() {
			std::cout << "FUCK" << std::endl;
		};
	private:
};

int main(void) {
	Animal *pet = new Cachorro();
	pet->eating();
}
