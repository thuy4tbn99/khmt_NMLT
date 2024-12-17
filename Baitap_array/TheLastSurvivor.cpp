#include<bits/stdc++.h>

using namespace std;
void xoamang(string a[], int &n, int vt){
    for(int i=vt; i<n-1; i++){
        a[i] = a[i+1];
    }
    n = n-1;
}
void nhapmang(string a[], int n){
    for(int i=0; i<n; i++){
        getline(cin, a[i]);
    }
}
void xuatmang(string a[], int n){
    for(int i=0; i<n; i++){
        cout << a[i] << endl;
    }
}
int main(){
    int n;cin >>n;
    int k; cin >> k;cin.ignore();
    string a[n];
    nhapmang(a, n);

    int vtb=0;
    while(true){
        vtb = (vtb +k)%n;
        xoamang(a, n, vtb);
        vtb = (vtb)%n;
        if(n==1)break;
    }
    cout << a[0];
}
