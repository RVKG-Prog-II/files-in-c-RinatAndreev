#include <iostream>
#include <fstream>
#include <string>
using namespace std;



void countAndWriteDigitsPerLine(const std::string& filename, const std::string& outputFilename) {
    ifstream inputFile(filename);
    ofstream outputFile(outputFilename);

    string line;
    while (getline(inputFile, line)) {
        int digitCount = 0;
        for (char c : line) {
            if (isdigit(c)) {
                digitCount++;
            }
        }
        outputFile << digitCount << std::endl;
    }

    inputFile.close();
    outputFile.close();
}

unsigned int countMaxDigits(string filename)
{
    ifstream inputFile(filename);
    string line;
    unsigned int maxDigitCount = 0;

    while (getline(inputFile, line)) {
        unsigned int digitCount = 0;
        for (char c : line) {
            if (isdigit(c)) {
                digitCount++;
            }
        }
        maxDigitCount = max(maxDigitCount, digitCount);
    }

    inputFile.close();
    return maxDigitCount;
}

int main() {
    string inputFilename = "filename.txt";
    string outputFilename = "outputfilename.txt";

    countAndWriteDigitsPerLine(inputFilename, outputFilename);
    cout << countMaxDigits(inputFilename);
       return 0;

}
