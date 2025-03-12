#include "ATarget.hpp"

ATarget::ATarget(const ATarget& o){*this=o;}
ATarget::ATarget(const std::string& type): _type(type){}
ATarget::~ATarget(){}
ATarget& ATarget::operator=(const ATarget& o){	
	_type=o._type;
	return *this;}

const std::string& ATarget::getType() const{return _type;}
void ATarget::getHitBySpell(const ASpell& spell) const {
	std::cout << _type << " has been " << spell.getEffects() << "!\n";
}