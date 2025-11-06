#include <iostream>
#include <vector>
#include <string>

void getTripleExlamationMarks(std::string string, size_t string_length, bool& isContains,
	std::vector<int>& indexes, int start_streak = -1, int streak_counter = 0, int i = 0) {

	if (i == string_length) return;

	if (string[i] == '!')
		streak_counter++;
	else
		streak_counter = 0;

	if (streak_counter == 3) {
		start_streak = i - 2;
		indexes.push_back(start_streak);
		streak_counter = 0;
	}

	if (indexes.size() > 0)
		isContains = true;

	getTripleExlamationMarks(string, string_length, isContains, indexes, start_streak, streak_counter, i + 1);
}

std::string changeString(std::string string, std::vector<int> &exlamationMarksIndexes, int i) {
	if (i < 0) return string;

	int start_index = exlamationMarksIndexes[i];
	string.replace(start_index, 3, "**");


	return changeString(string, exlamationMarksIndexes, i-1);
}

int main() {
	std::string string;
	std::cout << "Enter a string: "; std::getline(std::cin, string);

	bool isContains = false;
	std::vector<int> indexes;
	getTripleExlamationMarks(string, string.length(), isContains, indexes);

	std::string changed_string = changeString(string, indexes, (int)indexes.size() - 1);

	std::cout << "Start string : " << string << std::endl;
	std::cout << "Changed string : " << changed_string << std::endl;
	std::cout << "is contains? :  " << isContains << std::endl;

	return 0;
}