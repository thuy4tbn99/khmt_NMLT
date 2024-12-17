#include<bits/stdc++.h>

using namespace std;


int tong(int a, int b){
    int sum = a+b;
    return sum;
}

void hello(){
    cout << "hello world";
}

float increase(float x){
    x = x+0.5;
    return x;
}

void increase_ver2(float x){
    x = x+0.5;
}

void increase_ver3(float &x){
    x = x+0.5;
}


void doicho_2(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}

void doicho(int a, int b){
    int tmp = a;
    a = b;
    b = tmp;
}

int sum_3(int a, int &b){
    a = a+1;
    b = b+2;
    int sum = a+b;
    return sum;
}

int main(){
    int var1 = 3, var2 = 4;
    int sum = sum_3(var1, var2);
    sum = sum -1;
    cout << var1 << " " << var2 << " " << sum_3(var1, var2);

//    int var1 = 3, var2 = 4;
////    doicho(var1, var2);
////    cout << var1 << " " << var2 << endl;
//    doicho_2(var1, var2);
//    cout << var1 << " " << var2 << endl;
//    int a = 4, b=3;
//    int c=10, d=12;
//    int sum_cd = tong(c, d);
//    int sum_ab = tong(a,b);
//    cout << sum_ab;
//    cout << tong(a,b);
//    hello();

//    float bien1 = 4.3;
//    increase_ver3(bien1);
//    cout << bien1;

//    int var1 = 3, var2 = 4
//    doicho(var1, var2);
//    cout << var1 << " " << var2;

    return 0;
}
