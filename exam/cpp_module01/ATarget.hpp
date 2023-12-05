#ifndef ATARGET_HPP
#define ATARGET_HPP

# include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget {
    public:
            ATarget(std::string const & type);
            virtual ~ATarget();
            std::string const & getType() const;
            virtual ATarget *clone() const = 0;
            void getHitBySpell(ASpell const & obj) const;
    protected:
            std::string _type;
    
};


#endif