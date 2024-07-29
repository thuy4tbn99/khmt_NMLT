#include<bits/stdc++.h>

using namespace std;


int countCharacter(const string path, char letter) {
    ifstream inputFile(path);
    if (!inputFile) {
        cerr << "Error opening file!" << endl;
        return -1;
    }

    letter = tolower(letter);

    int count = 0;
    char ch;
    while (inputFile.get(ch)) {
        if (tolower(ch) == letter) {
            count++;
        }
    }

    inputFile.close();

    return count;
}

int main(){
    string path ;
    cin >> path;
    ifstream ff (path);

    if (!ff){
        cerr << "Error open file:" << path;
        return -1;
    }
    char letter;
    cin >> letter;
    int result = countCharacter(path, letter);
    cout << result;

    return 0;
}
