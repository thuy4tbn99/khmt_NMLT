#include <iostream>
using namespace std;


int main() {
    int m, n;
    cout << "Nhap m va n: ";
    cin >> m >> n;

    // Tìm tổng số số nguyên
    int total = n - m + 1;

    // In dòng đầu tiên chứa các số không là bội số của 5
    int count = total % 5; // Số lượng số dư
    int current = m;

    if (count > 0) {
        for (int i = 0; i < count; ++i) {
            cout << current++ << " ";
        }
        cout << endl;
    }

    // In các dòng còn lại, mỗi dòng chứa đúng 5 số
    while (current <= n) {
        for (int i = 0; i < 5 && current <= n; ++i) {
            cout << current++ << " ";



}
