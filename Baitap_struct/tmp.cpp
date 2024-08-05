#include<bits/stdc++.h>

using namespace std;

int main(){
    int m,n;
    cin >> m >> n;
    int a[m][n];

    for (int i=0; i<m ; i++){
        for (int j=0; j<n; j++){
            cin >> a[i][j];
        }
    }
    int cnt =0;
    int k; cin >> k;
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            if (a[i][j] > k) cnt++;
        }
    }
    cout << cnt;
    return 0;
}

