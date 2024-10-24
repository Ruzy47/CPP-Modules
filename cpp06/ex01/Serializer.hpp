#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <string>
#include <stdint.h>

struct Data {
	int n;
	std::string name;
};

class Serializer {
	public:
		static uintptr_t serialize(Data* str);
		static Data* deserialize(uintptr_t raw);
	private:
		Serializer();
		Serializer(const Serializer &other);
		~Serializer();
		Serializer&	operator=(const Serializer &other);

};

# endif