#include "Warlock.hpp"

Warlock::Warlock() {}

Warlock::Warlock(std::string const & name, std::string const & title) : _name(name), _title(title) {
    std::cout << getName() << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock() {
    std::cout << getName() << ": My job here is done!" << std::endl;
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
    std::cout << getName() << ": I am " << getName() << ", " << getTitle()<< "!" << std::endl;
}
