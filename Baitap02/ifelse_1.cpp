#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int a=4;

    // if - only, 3 loai
    if (a%2==0){
        cout << "hello" << endl;
        a = a+10;
        a=a-3;
    }
//
    if (true) cout << "hello" << endl;
//
//
//    if (check){
//        cout << "true" << endl;
//    }
//
//
//    // if-else
    if (a%2==0){
        cout << "true";
    }
    else{
        cout << "false";
    }
//
//    // if-else if - else
//    bool cd1 = false;
//    bool cd2 = false;
//
//
//    if (cd1){
//        cout << "true";
//    }
//    else if (cd2){
//        cout << "true2";
//    }
//    else{
//        cout << "No condition satisfy";
//    }
///*
//
//    //
//    bool cd1 = true;
//    bool cd2 = true;
//    bool cd3 = false;
//    cout << (cd1&&cd2&&cd3) << endl;
//*/
//    cout << "\nend file!" << endl;
    return 0;

}
