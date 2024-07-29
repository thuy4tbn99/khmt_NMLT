#include<bits/stdc++.h>

using namespace std;

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

int main(){
    int var1 = 3, var2 = 4
    doicho(var1, var2);
    cout << var1 << " " << var2;

    return 0;
}
