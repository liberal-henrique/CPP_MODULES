#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook() {
    for (std::map<std::string, ASpell *>::iterator it = _SpellBook.begin(); it != _SpellBook.end(); ++it) {
        delete it->second;
    }
    _SpellBook.clear();
}

void SpellBook::learnSpell(ASpell *spell) {
    if (spell)
        _SpellBook.insert(std::pair<std::string, ASpell *>(spell->getName(), spell->clone()));
}

void SpellBook::forgetSpell(std::string spellName) {
    std::map<std::string, ASpell *>::iterator it = _SpellBook.find(spellName);
    if (it != _SpellBook.end()) {
        delete it->second;
    }    
    _SpellBook.erase(spellName);
}

ASpell*  SpellBook::createSpell(std::string const &spellName) {
    if (_SpellBook.find(spellName) != _SpellBook.end())
        return (_SpellBook[spellName]);
    return NULL;
}

