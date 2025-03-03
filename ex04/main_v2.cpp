#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	if (argc != 4) 
		return 1;
	
	std::string new_file_name = 
			std::string(argv[1]) + ".replace";
	std::ifstream file_stream(argv[1]);
	std::ofstream outFile(new_file_name.c_str());

	if (!file_stream.is_open() || !outFile.is_open()) {
		std::cerr << "Error" << std::endl;
		return 1;
	}

	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string line;
	size_t pos;

	while(std::getline(file_stream, line)) {

		while((pos = line.find(s1)) != std::string::npos) {
			outFile << line.substr(0, pos) << s2; //pos excluded
			pos += s1.length();
			line = line.substr(pos);
		}
		outFile << line << '\n';
	}	
	file_stream.close();
	outFile.close();
}
