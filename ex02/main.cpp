#include <iostream>

/***
 * @brief This program demonstrates the use of pointers and references in C++.
 * It creates a string, and then creates a pointer and a reference to that string.
*/
int main()
{
	std::string sentence = "HI THIS IS BRAIN";
	std::string *stringPTR = &sentence;
	std::string &stringREF = sentence;

	std::cout << &sentence << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;
	
	std::cout << sentence << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
}
