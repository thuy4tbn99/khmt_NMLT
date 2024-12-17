#include<bits/stdc++.h>

using namespace std;

void nhapmang(int a[], int n){
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
}

void xuatmang(int a[], int n){
    for(int i=0; i<n; i++){
        cout <<  a[i] << " ";
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    nhapmang(arr, n);
//    sapxep(a, n);
    xuatmang(arr,n);
    return 0;
}

