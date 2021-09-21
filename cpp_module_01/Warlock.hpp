#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <iostream>

#include "ASpell.hpp"
#include <map>


class Warlock
{
	private:
		std::string name;
		std::string title;
		Warlock(void);
		Warlock &operator=(Warlock &other);
		Warlock(Warlock &other);
		std::map<std::string, ASpell*> know_spell;
	public:
		Warlock(std::string const &name, std::string const &title);
		~Warlock(void);
		const std::string &getName(void) const;
		const std::string &getTitle(void) const;
		void setTitle(std::string const &title);
		void introduce(void) const;
		void learnSpell(ASpell *spell_ptr);
		void forgetSpell(std::string const &spell_name);
		void launchSpell(std::string const &spell_name,
			ATarget const &target) const;
};

#endif
