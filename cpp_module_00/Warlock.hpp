#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <iostream>

class Warlock
{
	private:
		std::string name;
		std::string title;
		Warlock(void);
		Warlock &operator=(Warlock &other);
		Warlock(Warlock &other);
	public:
		Warlock(std::string const &name, std::string const &title);
		~Warlock(void);
		const std::string &getName(void) const;
		const std::string &getTitle(void) const;
		void setTitle(std::string const &title);
		void introduce(void) const;
};

#endif
