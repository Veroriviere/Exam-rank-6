#pragma once
#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class SpellBook{
	private:
		std::map <std::string, ASpell*> _spellBook;
		SpellBook(const SpellBook& o);
		SpellBook& operator=(const SpellBook& o);

	public:
		SpellBook();
		~SpellBook();
		
		void learnSpell(ASpell*);
		void forgetSpell(std::string const &);
		ASpell* createSpell(std::string const &);
};