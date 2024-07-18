#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int a;
    cin >> a;

    bool dk1 = a%3==0;
    bool dk2 = !(a%4==0);
    bool dk3 = (a%5==2)&&(a%5==3);
    cout << "dk1: " << dk1 << endl;
    cout << "dk2: " << dk2 << endl;
    cout << "dk3: " << dk3 << endl;
    cout << "dk1 && dk2 && dk3" << (dk1 && dk2 && dk3) << endl;

    if(dk1 && dk2 && dk3){
        cout << "YES";
    }
    else{
        cout << "NO";
    }



//    if(dk1){
//        cout << "bingo dk1\n";
//    }
//    else{
//        cout << "sai dk1\n";
//    }
//    if (dk2){
//        cout << "bingo dk2\n";
//    }
//    else cout << "sai dk2\n";
//
//    if (dk1&&dk2){
//        cout << "bingo!!!";
//    }

    return 0;

}
