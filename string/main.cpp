#include <iostream>
#include <vector>
#include <string>
#include <sstream>

// std::string::npos == END OF STRING

int main() {

    std::vector<std::string> words;
    std::stringstream ss("Random String Generator");
    std::string word;

    while(std::getline(ss, word, ' ')) {
        words.push_back(word);
    }

    std::string wordCopy = word;
    
    std::cout << "Old Reference wordCopy: " << *(int*) &wordCopy << std::endl;
    std::cout << "Old Value wordCopy: " << wordCopy << std::endl;

    wordCopy = "Mudei e ai ?";

    std::cout << "Reference word: " << &word << std::endl;
    std::cout << "New Reference wordCopy: " << &wordCopy << std::endl;
    std::cout << "Value word: " << word << std::endl;
    std::cout << "Value wordCopy: " << wordCopy << std::endl;

    for (auto i = 0; i < words.size(); i++) {

	    std::cout << words[i] << std::endl;
    } 
}
