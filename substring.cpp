//A program to find the position of the first letter of a substring without using the standard string library functions, apart from .length()

#include <iostream>
#include <string>

using namespace std;


bool is_prefix(string word, string phrase, int start_position);
int substring_position(string word, string phrase);
int find_instance(char letter, string phrase, int position);

//program should return 4, 11, -1

int main() {

    cout << substring_position("hello", "say hello") << "\n";

    cout << substring_position("imp", "this is a simple exercise") << "\n";
  
    cout << substring_position("test", "an exercise") << "\n";
      
    return 0;

}


int substring_position(string word, string phrase) {

	char first_letter = word[0];
	int current_position = 0;

	while (current_position < phrase.length()) {

		current_position = find_instance(first_letter, phrase, current_position);

		if (current_position != -1 && is_prefix(word, phrase, current_position)) {

			return current_position;

		} else if (current_position == -1 || current_position == phrase.length()) {
		    
		  return -1;
		    
		} else {

			current_position++;

		}

	}

}

//find the next position of the first letter of the substring
int find_instance(char letter, string phrase, int position) {

	int start = position;

	while (start < phrase.length()) {

		if (phrase[start] == letter) {

			return start;

		} else {

			start++;

		}
	}

	return -1;
}

//find if the letters following the instance of the first letter are the same as the rest of the substring
bool is_prefix(string word, string phrase, int start_position) {

	int start = start_position + 1;

	for (int i = 1; i < word.length(); i++) {

		if (word[i] != phrase[start]) {

			return false;

		} else {

			start++;
			
		}

	}
		
	return true;

}
