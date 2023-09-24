#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Ice : public AMateria {
	public:
		Ice();
		Ice(const Ice &copy);
		~Ice();
		Ice & operator=(const Ice &assign);
		std::string const & getType() const;
		AMateria* clone() const;

	private:
		std::string type;
};

#endif