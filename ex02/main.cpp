#include <iostream>

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