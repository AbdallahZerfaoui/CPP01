#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	if (argc != 4) 
		return 1;
	
	std::ifstream file_stream(argv[1]);
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string line;
	size_t pos;

	while(std::getline(file_stream, line)) {

		while(line.size() > 0) {
			pos = line.find(s1);
			if (pos != std::string::npos) {
			std::cout << line.substr(0, pos) << s2; //pos excluded
			pos += s1.length();
			line = line.substr(pos);
			}
			else {
				std::cout << line; 
				break;
			}
		}
		std::cout << '\n';
	}
}