#pragma once
#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget{
	protected:
		std::string _type;

	public:
		ATarget(const ATarget& o);
		ATarget(const std::string& type);
		virtual ~ATarget();
		ATarget& operator=(const ATarget& o);

		const std::string& getType() const;
		virtual ATarget*  clone() const=0;
		void getHitBySpell(const ASpell& spell) const;		
};