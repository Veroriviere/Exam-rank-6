#include "SpellBook.hpp"

SpellBook::SpellBook(const SpellBook& o){*this = o;}
SpellBook& SpellBook::operator=(const SpellBook& o){
	_spellBook = o._spellBook;
	return *this;
}

SpellBook::SpellBook(){}
SpellBook::~SpellBook() {

}


void SpellBook::learnSpell(ASpell* spell){
	if (!spell)
		return;
	std::map <std::string, ASpell*> :: iterator it = _spellBook.find(spell->getName());
	if (it== _spellBook.end())
		_spellBook[spell->getName()] = spell->clone();
}

void SpellBook::forgetSpell(std::string const & spellName){
		std::map <std::string, ASpell*> :: iterator it = _spellBook.find(spellName);

	if (it != _spellBook.end() )
		{
			delete it->second;
			_spellBook.erase(it);
		}
}
ASpell* SpellBook::createSpell(std::string const & spellName){
	ASpell *tmp = NULL;
		
	std::map <std::string, ASpell*> :: iterator it = _spellBook.find(spellName);
	if (it != _spellBook.end())
		tmp = it->second;
	return tmp; 
}
