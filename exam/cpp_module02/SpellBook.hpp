# ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

# include <iostream>
# include <string>
# include <vector>
# include <map>
# include "ASpell.hpp"
# include "ATarget.hpp"

// class ASpell;

class SpellBook {
    public:
            SpellBook();
            ~SpellBook();
            void learnSpell(ASpell *spell);
            void forgetSpell(std::string spellName);
            ASpell* createSpell(std::string const &spellName);
            
    private:
            SpellBook(SpellBook const &other);
            SpellBook &operator=(SpellBook const &other);
            std::map< std::string, ASpell *> _SpellBook;
};

#endif