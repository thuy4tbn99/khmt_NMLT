#include<iostream>

using namespace std;

int main(){
//    int arr[5];
//    arr[0] = 12;
//    arr[1] = 13;
//    arr[2] = 14;
//    cout << arr[0] << " " << arr[1] << endl;
//    cout << arr[4];


//    int arr[5] = {1,2,3,4,5};
//    cout << arr[0] << " " << arr[1];

    int thai[5];
    for(int i=0;i<5; i++){
        cin >> thai[i];
    }

    for(int i=0; i<5; i++){
        if(thai[i]%2==0){
            cout << thai[i] << " ";
        }
    }



    // nhap xuat mang
//    int n;
//    cin >> n;
//    int arr[n];
////    // nhap mang
//    for (int i=0; i<n; i++){
//        cin >> arr[i];
//    }

//    for (int i=1; i<=n; i++){
//        cin >> arr[i];
//    }


    // xuat mang
//    for (int i=0; i<n; i++){
//        cout << arr[i] << " ";
//    }
//    cout << endl;

//    for(int i=n-1; i>=0; i--){
//        if(arr[i]%2==0){
//            cout << arr[i] << " ";
//        }
//
//    }

//    // duyet nguoc?
//
//
////  common error
//    int a[5];
//    a[5] = {1,2,3,4,5};


//    int sohang = 3;
//    int socot = 2;
//    int arr[sohang][socot];
//    for(int i=0; i<sohang; i++){
//        for(int j=0; j<socot; j++){
//            cout << "i:" << i << " j:" << j << endl;
//            cin >> arr[i][j];
//        }
//    }
//
//    for(int i=0; i<sohang; i++){
//        for(int j=0; j<socot; j++){
//            cout << arr[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//    for(int i=0; i<sohang; i++){
//        for (int j=0; j<socot; j++){
//            cout << arr[i][j] << " ";
//        }
//        cout << endl;
//    }
    return 0;

}
