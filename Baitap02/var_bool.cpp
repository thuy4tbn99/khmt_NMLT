#include<iostream>

using namespace std;

int main(){

    // cout bool var boolean
    bool check = false; //false
    cout << check;



    // phep toan vs bool
    bool c1 = false;
    bool c2 = false;
    cout << !c1 << endl;
    cout << !c2 << endl;
    cout << (c1&&c2) << endl;
    cout << (c1||c2) << endl;
/*
    int a = 4;
    bool cd1 = a%3==0;



    bool cd2 = !(a%3==0); // khong chia het cho 3 hay ko?
    cout << cd2;


    // khong chia het cho 3 == chia 3 du 1 == chia 3 du 2
    int a = 3;
    bool cd1 = !(a%3==0);
    cout << cd1 << endl;

    bool cd2 = (a%3==1) && (a%3==2);
    cout << cd2 << endl;

    // 3 dk tro len
    bool cd1 = true;
    bool cd2 = false;
    bool cd3 = true;
    cout << (cd1&&cd2&&cd3) << endl;

    //Conventional errors
    cout << cd1||cd2 << endl;

*/
    return 0;

}
