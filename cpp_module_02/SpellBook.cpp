#include "SpellBook.hpp"

SpellBook::SpellBook(void) : _spells() {}

SpellBook::~SpellBook(void)
{
	for (std::map<std::string, ASpell *>::iterator
		it = _spells.begin(); it != _spells.end(); ++it)
		delete it->second;
}

void SpellBook::learnSpell(ASpell *spell_ptr)
{
	_spells.insert(std::make_pair(spell_ptr->getName(),
		spell_ptr->clone()));
}

void SpellBook::forgetSpell(std::string const &name)
{
	std::map<std::string, ASpell *>::iterator r =
		_spells.find(name);
	
	if (r != _spells.end())
	{
		delete r->second;
		_spells.erase(r);
	}
}

ASpell *SpellBook::createSpell(std::string const &name) const
{
	std::map<std::string, ASpell *>::const_iterator r =
		_spells.find(name);
	
	if (r != _spells.end())
		return (r->second);
	else
		return (NULL);
}
