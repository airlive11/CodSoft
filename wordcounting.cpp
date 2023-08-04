#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;
// Counts words in a text file and returns total number of words found or negative value on error

int countWords(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Error opening file: " << filename << std::endl;
        return -1;
    }

    std::string line;
    int wordCount = 0;

    while (std::getline(file, line)) {
        std::istringstream iss(line);
        std::string word;
        while (iss >> word) {
            wordCount++;
        }
    }

    file.close();
    return wordCount;
}

int main() {
    string filename;
    cout << "Enter the file name: ";
    cin >> filename;

    int wordCount = countWords(filename);

    if (wordCount >= 0) {
        std::cout << "Total word count in the file: " << wordCount << std::endl;
    }

    return 0;
}
