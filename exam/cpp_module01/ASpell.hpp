#ifndef ASPELL_HPP
#define ASPELL_HPP

# include <iostream>
# include "ATarget.hpp"

class ATarget;

class ASpell {
    public:
            ASpell(std::string const & name, std::string const & effects);
            virtual ~ASpell();
            std::string const & getName() const;
            std::string const & getEffects() const;
            virtual ASpell *clone() const = 0;
            void launch(ATarget const & obj) const;
    protected:
            std::string _name;
            std::string _effects;
};


#endif