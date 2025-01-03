#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void findSubmatrices(const vector<vector<int>> &matrix, int n) {
    vector<pair<int, int>> result;

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

int main() {
    int n;
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));


    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int value;
            cin >> value;

            matrix[i][j] = value;
        }
    }
    findSubmatrices(matrix, n);

    return 0;
}

