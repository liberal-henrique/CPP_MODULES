#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator() {
    for (std::map<std::string, ATarget *>::iterator it = _TargetGenerator.begin(); it != _TargetGenerator.end(); ++it) {
        delete it->second;
    }
    _TargetGenerator.clear();
}

void TargetGenerator::learnTargetType(ATarget *target) {
    if (target)
        if (_TargetGenerator.find(target->getType()) == _TargetGenerator.end())
            _TargetGenerator.insert(std::make_pair(target->getType(), target->clone()));
}

void TargetGenerator::forgetTargetType(std::string targetName) {
    std::map<std::string, ATarget *>::iterator it = _TargetGenerator.find(targetName);
    if (it != _TargetGenerator.end()) {
        delete it->second;
        _TargetGenerator.erase(_TargetGenerator.find(targetName));
    }    
}

ATarget* TargetGenerator::createTarget(std::string const &targetName) {
    if (_TargetGenerator.find(targetName) != _TargetGenerator.end())
        return (_TargetGenerator[targetName]);
    return (NULL);
}

