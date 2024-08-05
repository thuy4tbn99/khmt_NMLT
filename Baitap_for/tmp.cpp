#include<iostream>
using namespace std;
int main(){
    int m, n;
    cin >> m >> n;
    int a[m][n];

    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            cin >> a[i][j];
        }
    }

    for (int j=0; j<n; j++){
        int i_m = a[0][j];
        for (int i=0; i<m; i++){
            if (a[i][j] > i_m) i_m = a[i][j];
        }
        cout << i_m << " ";
    }

    return 0;
}
