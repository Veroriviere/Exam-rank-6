#pragma once
#include "ASpell.hpp"
#include <string>
class ASpell;

class ATarget{
	protected:
		std::string _type;
		
	public:
		ATarget(const std::string& type);
		virtual ~ATarget();
		ATarget (const ATarget& o);
		ATarget& operator=(const ATarget& o);

		const std::string& getType() const;
		void getHitBySpell(const ASpell& spell) const;
		virtual ATarget* clone() const=0;
};