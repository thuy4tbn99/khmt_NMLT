#include<bits/stdc++.h>

using namespace std;


int main(){

    // 2 operator: &x and *(&x)
//    int x=3;
//    cout << &x << endl;
//    cout << *(&x) << endl;
//
//    int* ptr;
//    float* ptr1;
//    ptr= &x;
//    cout << ptr << endl;
//    cout << *ptr << endl;
//
//    // cin, cout with pointer
    int* ptr2 = new int;
    cout << ptr2 << " " << *ptr2 << endl;
//    cin >> *ptr2;
//    cout << ptr2 << " " << *ptr2 << endl;

    // run raised warning dangerous
    int* ptr1 = new int;
    cout << ptr1 << endl;
    cin >> *ptr1;
    cout << *ptr1;

//    return 0;
}
