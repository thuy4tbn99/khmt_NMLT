#include<iostream>

using namespace std;

int main(){
//    int arr[5];
//    arr[0] = 12;
//    arr[1] = 13;
//    arr[2] = 14;
//    cout << arr[0];
//    cout << arr[0] << " " << arr[1] << endl;
//    cout << arr[4] << " " << arr[5];


//    int arr[5] = {1,2,3,4,5};
//    cout << arr[0] << " " << arr[1];

    // nhap xuat mang
    int n = 5;
    int arr[n];
    // nhap mang
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    // xuat mang
//    for (int i=0; i<n; i++){
//        cout << arr[i] << " ";
//    }
    n = 5;
    for (int i=n-1; i>=0; i--){
        cout << arr[i] << " ";
    }

//    // duyet nguoc?
//
//
////  common error
////    int a[5];
////    a[5] = {1,2,3,4,5};
    return 0;

}
