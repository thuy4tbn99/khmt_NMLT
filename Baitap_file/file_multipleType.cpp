#include <bits/stdc++.h>

using namespace std;

void findMovies(char* path) {
    ifstream inputFile(path);
    if (!inputFile) {
        cerr << "Cannot open file: " << path << endl;
        return;
    }

    string line;
    getline(inputFile, line); // read first line
    bool foundMovie = false;
    while (!inputFile.eof()) {
        getline(inputFile, line);
        istringstream iss(line);
        string idStr, name, description, ratingStr;
        double rating;

        getline(iss, idStr, ',');
        getline(iss, name, ',');
        getline(iss, description, ',');
        getline(iss, ratingStr, ',');
        rating = stod(ratingStr);

        // Kiểm tra điều kiện: rating >= 8.0 và mô tả không chứa "boring"
        if (rating >= 8.0 && description.find("boring") == string::npos) {
            for (int i=1; i<int(name.size()); i++){
                cout << name[i];
            }
            cout << endl;

            foundMovie = true;
        }
    }

    inputFile.close();

    // Nếu không tìm thấy phim nào thỏa mãn điều kiện
    if (!foundMovie ) {
        cout << "All are boring!" << endl;
    }
}




int main() {
    char path[] = "film1.txt"; // Đường dẫn tới tệp
    findMovies(path);

    return 0;
}
