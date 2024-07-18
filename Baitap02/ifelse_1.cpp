#include<iostream>
#include<iomanip>

using namespace std;

int main(){

    bool check = false;
/*
    // if - only, 3 loai
    if (check==true){
        cout << "hello" << endl;
    }

    if (check==true) cout << "hello" << endl;
*/

    if (check){
        cout << "true" << endl;
    }


    // if-else
//    if (check==true){
//        cout << "true";
//    }
//    else{
//        cout << "false";
//    }

    // if-else if - else
    bool cd1 = false;
    bool cd2 = false;


    if (cd1){
        cout << "true";
    }
    else if (cd2){
        cout << "true2";
    }
    else{
        cout << "No condition satisfy";
    }
/*

    //
    bool cd1 = true;
    bool cd2 = true;
    bool cd3 = false;
    cout << (cd1&&cd2&&cd3) << endl;
*/
    cout << "\nend file!" << endl;
    return 0;

}
