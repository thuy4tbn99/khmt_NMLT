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



//void doicho_2(int &a, int &b){
//    int tmp = a;
//    a = b;
//    b = tmp;
//}
//
//void doicho(int a, int b){
//    int tmp = a;
//    a = b;
//    b = tmp;
//}

int main(){
//    int a = 4, b=3;
//    int sum_ab = tong(a,b);
//    cout << sum_ab;

    float bien1 = 4.3;
    bien1 = increase(bien1);
    cout << bien1;

//    int var1 = 3, var2 = 4
//    doicho(var1, var2);
//    cout << var1 << " " << var2;

    return 0;
}
