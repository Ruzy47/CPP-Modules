#include "Serializer.hpp"

int main() {
	Data ptr = {-42, "Test Data"};
	Data* original = &ptr;
	uintptr_t serialized = Serializer::serialize(original);
	Data* deserialized = Serializer::deserialize(serialized);
	if (original == deserialized) {
		std::cout << "It's ok." << std::endl;
		std::cout << "ID: " << deserialized->n << ", Name: " << deserialized->name << std::endl;
	}
	else
		std::cout << "Error." << std::endl;
	return 0;
}
