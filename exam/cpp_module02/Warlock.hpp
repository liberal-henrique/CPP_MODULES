# ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include <string>
# include <vector>
# include <map>
# include "ASpell.hpp"
# include "ATarget.hpp"
# include "SpellBook.hpp"

class SpellBook;

class Warlock {
    public:
            Warlock(std::string const &name, std::string const &title);
            ~Warlock();
            std::string const &getName() const;
            std::string const &getTitle() const;
            void    setTitle(std::string const &newTitle);
            void introduce() const;
            void learnSpell(ASpell *spell);
            void forgetSpell(std::string spellName);
            void launchSpell(std::string spellName, ATarget const &target);
            
    private:
            Warlock();
            Warlock(Warlock const &other);
            Warlock &operator=(Warlock const &other);
        //     std::map< std::string, ASpell *> _SpellBook;
            SpellBook spellBook;
            std::string _name;
            std::string _title;
};

#endif