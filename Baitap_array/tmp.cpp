#include<iostream>
#include<iomanip>
using namespace std;

int cong (int &x){
    x = x+1;
    return x;
}

int luontravebon(){
    return 4;
}

int sum(int a, int b){
    int tong = a+b;
    return tong;
}

int cong2(int x){
    x = x+1;
    return x;
}

int cong(int &x){
    x = x+1;
    return x;
}

int tong_1(int x, int &y){
    x = x+3;
    y = y+1;
    return x+y;
}

void doicho(int &x, int &y){
    int tmp;
    tmp = x;
    x = y;
    y = tmp;
}

int main(){
    // tim loi sai
    int tuan = 4;
    int thuy=3;
    doicho(tuan, thuy);
    cout << thuy;

//    cong2(tuan);




//    cout << y << endl;
//    int z = luontravebon();
//    cout << z;
//    cout << cong(x);
}
