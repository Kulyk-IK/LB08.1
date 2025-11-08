#include <iostream>
#include <string>

bool isContainsTripleExlamationMarks(std::string string) {
	if (string.find("!!!") == std::string::npos)
		return false;
	else
		return true;
}

std::string changeString(std::string string) {
	const std::string target = "!!!";

	for (size_t pos = 0; (pos = string.find(target, pos)) != std::string::npos; pos++) {
		string.replace(pos, 3, "**");
	}
	return string;
}

int main() {
	std::string string;
	std::cout << "Enter a string: "; std::getline(std::cin, string);

	bool isContains = isContainsTripleExlamationMarks(string);

	std::string changed_string = changeString(string);

	std::cout << "Start string : " << string << std::endl;
	std::cout << "Changed string : " << changed_string << std::endl;
	std::cout << "is contains? :  " << isContains << std::endl;

	return 0;
}