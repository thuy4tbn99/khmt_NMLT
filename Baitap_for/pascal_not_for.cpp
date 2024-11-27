#include <iostream>
using namespace std;

// Hàm tính hệ số nhị thức (nCr)
int binomialCoefficient(int n, int r) {
    int result = 1;
    if (r > n - r) {
        r = n - r;
    }
    for (int i = 0; i < r; ++i) {
        result *= (n - i);
        result /= (i + 1);
    }
    return result;
}

// Hàm in Tam giác Pascal bậc n
void printPascalTriangle(int n) {
    for (int i = 0; i < n; ++i) {
        // In các hệ số nhị thức
        for (int j = 0; j <= i; ++j) {
            cout << binomialCoefficient(i, j) << " ";
        }
        cout << endl; // Xuống dòng sau mỗi bậc
    }
}

int main() {
    int n;
    cout << "Nhap so bac cua Tam giac Pascal: ";
    cin >> n;

    printPascalTriangle(n);

    return 0;
}

