#pragma once
#include "ATarget.hpp"
#include <map>

class TargetGenerator{
	private:
		TargetGenerator(const TargetGenerator& o);
		TargetGenerator& operator=(const TargetGenerator& o);
		std::map <std::string, ATarget*> _targets;
	public:
		TargetGenerator();
		~TargetGenerator();
		void learnTargetType(ATarget*);
		void forgetTargetType(std::string const &);
		ATarget* createTarget(std::string const &);
};