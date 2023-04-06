#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");

    if (!inputFile) {
        cerr << "Не може да се отвори влезната датотека!" << endl;
        return 1;
    }

    if (!outputFile) {
        cerr << "Не може да се отвори излезната датотека!" << endl;
        return 1;
    }

    string word;
    while (inputFile >> word) {
        if (word.length() < 10) {
            outputFile << word << " ";
        }
    }

    inputFile.close();
    outputFile.close();

    return 0;
}
