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

	std::cout << &sentence << '\n';
	std::cout << stringPTR << '\n';
	std::cout << &stringREF << '\n';
	
	std::cout << sentence << '\n';
	std::cout << *stringPTR << '\n';
	std::cout << stringREF << '\n';
}
