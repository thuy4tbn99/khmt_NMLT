#include <iostream>
#include <algorithm>
using namespace std;

int findLHS(int arr[], int n) {
    int freq[n + 1] = {0};

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    int maxLength = 0;


    for (int i = 0; i <= n - 1; i++) {
        if (freq[i] > 0 && freq[i + 1] > 0) {
            maxLength = max(maxLength, freq[i] + freq[i + 1]);
        }
    }

    return maxLength;
}

int main() {
    int n; cin >> n; int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }


    cout << "Length of the longest harmonious subsequence: " << findLHS(a, n) << endl;

    return 0;
}

