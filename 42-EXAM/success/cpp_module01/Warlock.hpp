#pragma once
#include <iostream>
#include <map>
#include "ASpell.hpp"

class Warlock{
	private:
		Warlock();
		Warlock(const Warlock& o);
		Warlock& operator=(const Warlock& o);
		std::string _name;
		std::string _title;
		std::map <std::string, ASpell*> _spellBook;

	public:
		Warlock(const std::string& name, const std::string& title);
		~Warlock();
		const std::string& getName() const;
		const std::string& getTitle() const;
		void setTitle(const std::string& title);
		void introduce() const;

		void learnSpell(ASpell* spell);
		void forgetSpell(const std::string& spellName);
		void launchSpell(const std::string& spellName, const ATarget& target);
		
};