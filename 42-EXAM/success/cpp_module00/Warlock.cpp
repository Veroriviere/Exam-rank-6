#include "Warlock.hpp"

Warlock::Warlock(){}

Warlock::Warlock(const Warlock& o){*this=o;}
Warlock& Warlock::operator=(const Warlock& o){
	_name=o._name;
	_title=o._title;
	return *this;
}
Warlock::Warlock(const std::string& name, const std::string& title): _name(name), _title(title){
	std::cout << _name << ": This looks like another boring day.\n";
}
Warlock::~Warlock(){
	std::cout << _name << ": My job here is done!\n";
}

const std::string& Warlock::getName() const{return _name;}
const std::string& Warlock::getTitle() const{return _title;}
void Warlock::setTitle(const std::string& title){_title=title;}
void Warlock::introduce() const{
	std::cout << _name << ": I am " << _name << ", " << _title << "!\n";
}