#include <iostream>
#include <vector>

std::vector<int> getTripleExlamationMarks(char *string, bool& isContains) {
	std::vector<int> indexes;

	size_t string_length = strlen(string);

	int start_streak = -1;
	int streak_counter = 0;

	for (int i = 0; i < string_length; i++) {
		if (string[i] == '!')
			streak_counter++;
		else
			streak_counter = 0;

		if (streak_counter == 3) {
			start_streak = i - 2;
			indexes.push_back(start_streak);
			streak_counter = 0;
		}
	}

	if (indexes.size() > 0)
		isContains = true;

	return indexes;
}

std::string changeString(std::string string, std::vector<int> exlamationMarksIndexes) {
	size_t vector_size = exlamationMarksIndexes.size();
	for (int i = vector_size - 1; i >= 0; i--) {
		int start_index = exlamationMarksIndexes[i];
		string.replace(start_index, 3, "**");
	}

	return string;
}

int main() {
	std::string string;
	std::cout << "Enter a string: "; std::cin >> string;

	bool isContains = false;
	std::vector<int> vector = getTripleExlamationMarks(string, isContains);

	std::string changed_string = changeString(string, vector);

	std::cout << "Start string : " << string << std::endl;
	std::cout << "Changed string : " << changed_string << std::endl;
	std::cout << "is contains? :  " << isContains << std::endl;

	return 0;
}