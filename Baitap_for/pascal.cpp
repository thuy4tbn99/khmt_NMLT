#include <iostream>
using namespace std;

// follow as https://vuontoanblog.blogspot.com/2012/09/pascal-triangle.html

// calculate C(n, k)
 int binomialCoefficient(int n, int k) {
    int result = 1;
    for (int i = 0; i < k; ++i) {
        result *= (n - i);
        result /= (i + 1);
    }
    return result;
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= i; ++j) {
            cout << binomialCoefficient(i, j) << " ";
        }
        cout << endl;
    }

    return 0;
}

