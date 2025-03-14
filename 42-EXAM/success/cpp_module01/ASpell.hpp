#pragma once
#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell{
	protected:
		std::string _name;
		std::string _effects;

	public:
		ASpell(const ASpell& o);
		ASpell(const std::string& name, const std::string& effects);
		virtual ~ASpell();
		ASpell& operator=(const ASpell& o);

		const std::string& getName() const;
		const std::string& getEffects() const;
		virtual ASpell* clone() const=0;
		void launch(const ATarget& target) const;		
};