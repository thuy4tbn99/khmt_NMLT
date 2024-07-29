#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int countLines(string path) {
    ifstream inputFile(path);
    if (!inputFile) {
        cerr << "Mission failed" << endl;
        return -1;
    }

    string line;
    int lineCount = 0;
    while (!inputFile.eof()) {
        getline(inputFile, line);
//        cout << line << endl;
        lineCount++;
    }

    inputFile.close();
    return lineCount;
}

int main() {
    string path;
    cin >> path;

    int result = countLines(path);

    if (result != -1) {
        cout << result << endl;
    }

    return 0;
}

