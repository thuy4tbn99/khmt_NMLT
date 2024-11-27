#include <bits/stdc++.h>
using namespace std;



int main() {
    int m, n;
    cin >> m >> n;
    int spt = n-m+1;
    int du = spt%5;

    for (int i=m; i<m+du; i++){
        cout << i << " ";
    }
    cout << endl;
}
