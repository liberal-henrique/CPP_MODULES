# ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include <string>
# include <vector>
# include <map>
# include "ASpell.hpp"
# include "ATarget.hpp"

class Warlock {
    public:
            Warlock(std::string const & name, std::string const & title);
            ~Warlock();
            std::string const & getName() const;
            std::string const & getTitle() const;
            void    setTitle(std::string const &newTitle);
            void introduce() const;
            void learnSpell(ASpell *spell);
            void forgetSpell(std::string const &spellName);
            void launchSpell(std::string const &spellName, ATarget const &target);
            
    private:
            Warlock();
            Warlock &operator=(Warlock const &other);
            std::map < std::string, ASpell *> _SpellBook;
            std::string _name;
            std::string _title;
};

#endif