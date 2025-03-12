#pragma once
#include "ATarget.hpp"
#include <string>

class ATarget;

class ASpell{
	protected:
		std::string _name;
		std::string _effects;
		
	public:
		ASpell(const std::string& name, const std::string& effects);
		virtual ~ASpell();
		ASpell (const ASpell& o);
		ASpell& operator=(const ASpell& o);

		const std::string& getName() const;
		const std::string& getEffects() const;
		void launch(const ATarget& target) const;
		virtual ASpell* clone() const=0;
};