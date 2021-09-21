#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include <map>
#include "ASpell.hpp"


class SpellBook
{
private:
	SpellBook(SpellBook const &other);
	SpellBook &operator=(SpellBook const &other);

	std::map<std::string, ASpell *> _spells;

	public:
		SpellBook(void);
		~SpellBook(void);
		void learnSpell(ASpell *spell_ptr);
		void forgetSpell(std::string const &name);
		ASpell *createSpell(std::string const &name) const;
};

#endif
