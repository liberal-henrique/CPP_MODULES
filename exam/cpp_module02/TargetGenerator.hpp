# ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

# include <iostream>
# include <string>
# include <vector>
# include <map>
# include "ASpell.hpp"
# include "ATarget.hpp"

class ATarget;

class TargetGenerator {
    public:
            TargetGenerator();
            ~TargetGenerator();
            void learnTargetType(ATarget *target);
            void forgetTargetType(std::string targetName);
            ATarget* createTarget(std::string const &targetName);
            
    private:
            TargetGenerator(TargetGenerator const &other);
            TargetGenerator &operator=(TargetGenerator const &other);
            std::map< std::string, ATarget *> _TargetGenerator;
};

#endif