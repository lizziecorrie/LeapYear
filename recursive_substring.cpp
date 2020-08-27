/*A program to recursively check if a string is a substring of another phrase. If it is a substring, the program returns the index of the first letter of the substring in the phrase*/

#include <iostream>
#include <string>

using namespace std;

bool is_prefix(string substring, string phrase);
int substring_position(string substring, string phrase);

int main() {
    
      cout << substring_position("hello", "say hello") << "\n";

      cout << substring_position("imp", "this is a simple exercise") << "\n";
    
      cout << substring_position("test", "an exercise") << "\n";
      
      cout << substring_position("exercise test", "exercise") << "\n";
      
      cout << substring_position("", "an") << "\n";
        
      return 0;

}


int substring_position(string substring, string phrase) {
    
    int phrase_length = phrase.length();
    
    if (substring == "") {
        
        return 0;
        
    }
    
    for (int index = 0; index < phrase_length; index++) {
        
        if (substring[0] == phrase[index] && is_prefix(substring, phrase.substr(index, phrase_length))) {
            
            return index;
            
        }
        
        phrase_length--;
        
    }

    return -1;
    
}

bool is_prefix(string substring, string phrase) {

    int sub_length = substring.length();
    int phr_length = phrase.length();
    
    cout<< substring << " " << phrase << "\n";
    
    if (sub_length == 0) {
        
        return true;
        
    } else if (substring[0] == phrase[0] && is_prefix(substring.substr(1, sub_length - 1), phrase.substr(1, phr_length - 1))) {
        
        return true;
        
    }
    
    return false;
    
}
