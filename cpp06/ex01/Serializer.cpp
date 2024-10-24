#include "Serializer.hpp"

uintptr_t Serializer::serialize(Data* str)
{
	return (reinterpret_cast<uintptr_t>(str))	;
}

Data* Serializer::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}