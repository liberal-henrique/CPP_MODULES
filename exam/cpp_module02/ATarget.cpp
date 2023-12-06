#include "ATarget.hpp"

ATarget::ATarget() {}   

ATarget::ATarget(std::string const & type) : _type(type) {}

ATarget::ATarget(ATarget const &other) {
    *this = other;
}

ATarget::~ATarget() {}

std::string const &ATarget::getType() const {
    return (_type);
}

void ATarget::getHitBySpell(ASpell const & obj) const {
    std::cout << _type << " has been " << obj.getEffects() << "!" << std::endl;
}

