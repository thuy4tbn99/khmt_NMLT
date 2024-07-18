#include<iostream>

using namespace std;

int main(){
    /*
    // sum array
    int n;
    cin >>n ;
    int a[n];
    for (int i=0; i<n; i++){
        cin >> a[i];
    }

    int sum = 0;
    for (int j=0; j<n; j++){
        sum = sum + a[j];
    }
    cout << sum;
*/

    int n;
    cin >> n;
    int x[n];
    x[0] = 0;
    x[1] = 1;
    for(int i=2; i<n; i++){
        x[i] = x[i-1] + x[i-2];
    }

    for(int i=0; i<n; i++){
        cout << x[i] << " ";
    }


    // fibo
//    int n;
//    cin >> n;
//    int a[n];
//    a[0]=0;
//    a[1]=1;
//    for (int i=2; i<n; i++){
//        a[i] = a[i-1] + a[i-2];
//    }
//
//    for (int i=0; i<n; i++){
//        cout << a[i] << " ";
//    }

    return 0;
}

