#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    float height[5];
    for (int i = 0; i < 5; ++i) {
        cin >> height[i];
    }

    float max = height[0], min = height[0], total = 0;

    for (int i = 0; i < 5; ++i) {
        if (height[i] > max) {
            max = height[i];
        }
        if (height[i] < min) {
            min = height[i];
        }
        total += height[i];
    }

    float average = total / 5.0;

    cout << fixed << setprecision(2) << max << " " << min << " " << average << endl;
    return 0;
}
