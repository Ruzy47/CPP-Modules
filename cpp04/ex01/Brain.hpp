#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
	protected:
		std::string ideas[100];
	public:
		Brain();
		Brain(const Brain& t);
		Brain& operator=(const Brain& t);
		const std::string &getIdea(int n) const;
		void setIdea(std::string str, int n);
		virtual ~Brain();
};

#endif