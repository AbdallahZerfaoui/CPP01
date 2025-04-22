#include <iostream>
#include <fstream>


/*
** This program is a command-line utility to perform a simple
** search and replace operation on a text file.
**
** It expects exactly three command-line arguments:
** 1. The name of the input file.
** 2. The string to search for (s1).
** 3. The string to replace it with (s2).
**
** Usage: ./your_program_name <input_file> <string_to_find> <string_to_replace>
**
** The program creates a new output file named after the input file,
** with ".replace" appended (e.g., "input.txt.replace").
**
** It reads the input file line by line. For each line, it searches
** for all occurrences of <string_to_find> (s1) and replaces them
** with <string_to_replace> (s2), writing the modified content
** to the new output file.
**
** Return values:
** 0: The program executed successfully.
** 1: An error occurred (incorrect number of arguments or file opening failed).
*/
int main(int argc, char **argv)
{
	if (argc != 4) 
		return 1;
	
	std::string new_file_name = 
			std::string(argv[1]) + ".replace";
	std::ifstream file_stream(argv[1]);
	std::ofstream outFile(new_file_name.c_str());

	if (!file_stream.is_open() || !outFile.is_open()) 
	{
		std::cerr << "Error" << std::endl;
		return 1;
	}

	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string line;
	size_t pos;

	while(std::getline(file_stream, line)) 
	{

		while((pos = line.find(s1)) != std::string::npos) 
		{
			outFile << line.substr(0, pos) << s2; //pos excluded
			pos += s1.length();
			line = line.substr(pos);
		}
		outFile << line << '\n';
	}	
	file_stream.close();
	outFile.close();
}
