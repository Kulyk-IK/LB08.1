#include <iostream>
#include <string>

bool isContainsTripleExlamationMarks(std::string string) {
	int counter = 1;
	for (int i = 0; i < string.length(); i++) {
		if (counter == 3)
			return true;

		if (string[i] == '!')
			counter++;
		else
			counter = 1;
	} 
	return false;
}

std::string changeString(std::string string) {
	int start_streak = -1;
	int streak_counter = 0;

	for (int i = 0; i < string.length(); i++) {
		if (string[i] == '!')
			streak_counter++;
		else
			streak_counter = 0;

		if (streak_counter == 3) {
			start_streak = i - 2;
			string.replace(start_streak, 3, "**");
			streak_counter = 0;

			i = start_streak - 1;
		}
	}

	return string;
}

int main() {
	std::string string ;
	std::cout << "Enter a string: "; std::getline(std::cin, string);

	bool isContains = isContainsTripleExlamationMarks(string);

	std::string changed_string = changeString(string);

	std::cout << "Start string : " << string << std::endl;
	std::cout << "Changed string : " << changed_string << std::endl;
	std::cout << "is contains? :  " << isContains << std::endl;

	return 0;
}