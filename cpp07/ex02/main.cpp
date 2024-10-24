#include "Array.hpp"

int main() {
	try
	{
		Array<int> arr(5);
		for (unsigned int i = 0; i < arr.size(); i++) {
			arr[i] = i * 10;
		}
		const Array<int> constArr = arr;
		for (unsigned int i = 0; i < constArr.size(); i++) {
			std::cout << "constArr[" << i << "] = " << constArr[i] << std::endl;  // Должно сработать
		}
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}

// int main() {
// 	try {
// 		Array<int> intArray(5);

// 		for (unsigned int i = 0; i < intArray.size(); ++i) {
// 			intArray[i] = i * 5;
// 		}

// 		for (unsigned int i = 0; i < intArray.size(); ++i) {
// 			std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;
// 		}

// 		std::cout << intArray[10] << std::endl;
// 	}
// 	catch (const std::exception& e) {
// 		std::cerr << "Error: " << e.what() << std::endl;
// 	}

// 	return 0;
// }
