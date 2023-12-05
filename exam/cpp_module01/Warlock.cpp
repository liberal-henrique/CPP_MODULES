#include "Warlock.hpp"

Warlock::Warlock() {}

Warlock::Warlock(std::string const & name, std::string const & title) 
    : _name(name), _title(title) {
    std::cout << getName() << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock() {
    std::cout << getName() << ": My job here is done!" << std::endl;
    for (std::map<std::string, ASpell *>::iterator it = _SpellBook.begin(); it != _SpellBook.end(); ++it) {
        delete it->second;
    }
    _SpellBook.clear();
}

Warlock &Warlock::operator=(Warlock const &other) {
    this->_name = other._name;
    this->_title = other._title;
    return (*this);    
}

std::string const & Warlock::getName() const {
    return (_name);
}

std::string const & Warlock::getTitle() const {
    return (_title);
}

void    Warlock::setTitle(std::string const & newTitle) {
    _title = newTitle;
}

void Warlock::introduce() const {
    std::cout << getName() << ": I am " << getName() << ", " << getTitle() << "!" << std::endl;
}

void Warlock::learnSpell(ASpell *spell) {
    if (spell)
        if (_SpellBook.find(spell->getName()) == _SpellBook.end())
            _SpellBook.insert(std::make_pair(spell->getName(), spell->clone()));
}

void Warlock::forgetSpell(std::string const &spellName) {
    std::map<std::string, ASpell *>::iterator it = _SpellBook.find(spellName);
    if (it != _SpellBook.end()) {
        delete it->second;
        _SpellBook.erase(_SpellBook.find(spellName));
    }
    
    // std::map<std::string, ASpell *>::iterator it = _SpellBook.begin();
    // std::map<std::string, ASpell *>::iterator it_end = _SpellBook.end();
    // while (++it != it_end);
    // delete it->second;
    
}

void Warlock::launchSpell(std::string const &spellName, ATarget const &target) {
    if (_SpellBook.find(spellName) != _SpellBook.end())
        _SpellBook[spellName]->launch(target);
}

