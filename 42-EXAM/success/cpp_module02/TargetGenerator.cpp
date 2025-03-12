#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(const TargetGenerator& o){*this = o;}
TargetGenerator& TargetGenerator::operator=(const TargetGenerator& o){
	_targets = o._targets;
	return *this;
}

TargetGenerator::TargetGenerator(){}
TargetGenerator::~TargetGenerator() {
    std::map<std::string, ATarget*>::iterator it;

    // Delete all stored targets
    for (it = _targets.begin(); it != _targets.end(); ++it) {
        delete it->second;  // Delete the target
    }
}


void TargetGenerator::learnTargetType(ATarget* target){
	if (!target)
		return;
	std::map <std::string, ATarget*> :: iterator it = _targets.find(target->getType());
	if (it== _targets.end())
		_targets[target->getType()] = target->clone();
}

void TargetGenerator::forgetTargetType(std::string const & targetType){
		std::map <std::string, ATarget*> :: iterator it = _targets.find(targetType);

	if (it != _targets.end() )
		{
			delete it->second;
			_targets.erase(it);
		}
}
ATarget* TargetGenerator::createTarget(std::string const & targetType){
	ATarget *tmp = NULL;
		
	std::map <std::string, ATarget*> :: iterator it = _targets.find(targetType);
	if (it != _targets.end())
		tmp = it->second;
	return tmp; 
}
