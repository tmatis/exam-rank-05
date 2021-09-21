#include "Warlock.hpp"

Warlock::Warlock(std::string const &name,
				 std::string const &title) : name(name), title(title), _spellbook()
{
	std::cout << this->name
			  << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock(void)
{
	std::cout << this->name
			  << ": My job here is done!" << std::endl;
}

void Warlock::setTitle(std::string const &title)
{
	this->title = title;
}

void Warlock::introduce(void) const
{
	std::cout << this->name << ": I am "
			  << this->name << ", " << this->title
			  << " !" << std::endl;
}

const std::string &Warlock::getName(void) const
{
	return (this->name);
}

const std::string &Warlock::getTitle(void) const
{
	return (this->title);
}

void Warlock::learnSpell(ASpell *spell_ptr)
{
	_spellbook.learnSpell(spell_ptr);
}

void Warlock::forgetSpell(std::string const &spell_name)
{
	_spellbook.forgetSpell(spell_name);
}

void Warlock::launchSpell(std::string const &spell_name,
						  ATarget const &target) const
{
	ASpell *spell = _spellbook.createSpell(spell_name);

	spell->launch(target);
}
