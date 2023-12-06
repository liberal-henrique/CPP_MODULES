#include "Warlock.hpp"

Warlock::Warlock(std::string const & name, std::string const & title)
    : _name(name), _title(title) {
    std::cout << getName() << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock() {
    std::cout << getName() << ": My job here is done!" << std::endl;
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
    spellBook.learnSpell(spell);
}

void Warlock::forgetSpell(std::string spellName) {
    spellBook.forgetSpell(spellName);
}

void Warlock::launchSpell(std::string spellName, ATarget const &target) {
    ASpell * spell = spellBook.createSpell(spellName);
    if (spell)
        spell->launch(target);
}

