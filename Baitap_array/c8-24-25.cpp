#include <bits/stdc++.h>
using namespace std;


void findSubMatrix(int **a, int n){
    vector<pair<int, int>> result;
    vector<vector<int>> matrix(n, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            matrix[i][j] = a[i][j];
        }
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (matrix[i][j] == matrix[i][j + 1] &&
                matrix[i][j] == matrix[i + 1][j] &&
                matrix[i][j] == matrix[i + 1][j + 1]) {

                result.emplace_back(i, j);
            }
        }
    }


    sort(result.begin(), result.end());


    for (const auto &p : result) {
        cout << p.first << " " << p.second << endl;
    }
}


void sortBySum(int **a, int n){
    vector<pair<int, int>> result;
    vector<vector<int>> matrix(n, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            matrix[i][j] = a[i][j];
        }
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (matrix[i][j] == matrix[i][j + 1] &&
                matrix[i][j] == matrix[i + 1][j] &&
                matrix[i][j] == matrix[i + 1][j + 1]) {

                result.emplace_back(i, j);
            }
        }
    }



    sort(result.begin(), result.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return (a.first + a.second) < (b.first + b.second);
    });


    for (const auto &p : result) {
        cout << p.first << " " << p.second << endl;
    }
}


int main () {

    while(true){
        int n;
        cin >> n;
        int** a = new int*[n];
        for (int i = 0; i < n; ++i) {
            a[i] = new int[n];
        }

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {

                cin >> a[i][j];
            }
        }
        findSubMatrix(a, n);
//        sortBySum(a, n);
        cout << endl << endl;
    }
}

