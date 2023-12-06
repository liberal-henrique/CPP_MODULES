#ifndef ATARGET_HPP
#define ATARGET_HPP

# include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget {
	public:
		ATarget();
		ATarget(std::string const & type);
		ATarget(ATarget const &other);
		virtual ~ATarget();
		std::string const & getType() const;
		void getHitBySpell(ASpell const &obj) const;
		virtual ATarget *clone() const = 0;
    protected:
            std::string _type;
    
};


#endif