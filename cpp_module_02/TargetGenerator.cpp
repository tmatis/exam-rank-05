#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(void): _targets() {}

TargetGenerator::~TargetGenerator(void)
{
	for (std::map<std::string, ATarget* >::iterator
	it = _targets.begin(); it != _targets.end(); ++it)
		delete it->second;
}

void TargetGenerator::learnTargetType(ATarget *target)
{
	_targets.insert(std::make_pair(target->getType(),
		target->clone()));
}

void TargetGenerator::forgetTargetType(std::string const &name)
{
	std::map<std::string, ATarget *>::iterator r =
		_targets.find(name);
	
	if (r != _targets.end())
	{
		delete r->second;
		_targets.erase(r);
	}
}

ATarget *TargetGenerator::createTarget(std::string const &name) const
{
	std::map<std::string, ATarget *>::const_iterator r =
		_targets.find(name);
	
	if (r != _targets.end())
		return (r->second);
	else
		return (NULL);
}
