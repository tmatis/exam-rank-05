#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP

#include "ATarget.hpp"
#include <map>

class TargetGenerator
{
private:
	TargetGenerator(TargetGenerator const &other);
	TargetGenerator &operator=(TargetGenerator const &other);

	std::map<std::string, ATarget *> _targets;
public:
	TargetGenerator(void);
	~TargetGenerator(void);
	
	void learnTargetType(ATarget *target);
	void forgetTargetType(std::string const &name);
	ATarget *createTarget(std::string const &name) const;
};

#endif
