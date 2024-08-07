#include<bits/stdc++.h>

using namespace std;

void hoandoi(int a, int b){
    int tmp = a;
    a = b;
    b = tmp;
}

void hoandoi_2(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}

void hoandoi_3(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void nhapmang(int **a, int sohang, int socot){
    for(int i=0; i<sohang; i++){
        for(int k=0; k<socot; k++){
            cin >> a[i][k];
        }
    }
}

void xuatmang(int **a, int sohang, int socot){
    for(int i=0; i<sohang; i++){
        for(int k=0; k<socot; k++){
            cout << a[i][k] << " ";
        }
        cout << endl;
    }

}

int main(){

    int x=3;
    int y=4;

    hoandoi_3(&x, &y);

//    cout << x << " " << y;


    // cap phat bo nho mang 2 chieu
    int m=3, n=3;
    int **a;
//    a = new int*[m];
//    for (int i=0; i<m; i++){
//        *(a+i) = new int [n];
//    }

    nhapmang(a, m, n);
    xuatmang(a, m, n);

    return 0;
}

