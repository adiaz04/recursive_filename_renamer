#include "RecrusiveFilenameRenamer.h"
#include <iostream>
#include <string>

std::string directory;
std::string response;

std::string getInputFromUser()
{
	std::cout << "Welcome...time to rename some files..." << std::endl;
	std::cout << "What directory should I look in?" << std::endl;
	std::getline(std::cin, directory);
	std::cout << "You entered: \n " << directory << "\n is that correct? " << std::flush;
	std::getline(std::cin, response);
}

int main()
{
	getInputFromUser();
}