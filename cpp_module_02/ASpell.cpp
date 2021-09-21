#include "ASpell.hpp"

ASpell::ASpell(void) : name(), effects() {}

ASpell::ASpell(std::string const &name, std::string const &effects)
: name(name), effects(effects) {}

ASpell::ASpell(ASpell const &other)
	: name(other.name), effects(other.effects) {}

ASpell::~ASpell(void) {};

ASpell &ASpell::operator=(ASpell const &other)
{
	this->name = other.name;
	this->name = other.effects;
	return (*this);
}

std::string const &ASpell::getName(void) const
{
	return (this->name);
}

std::string const &ASpell::getEffects(void) const
{
	return (this->effects);
}

void ASpell::launch(ATarget const &target) const
{
	target.getHitBySpell(*this);
}
