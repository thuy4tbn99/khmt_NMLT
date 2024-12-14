#include<bits/stdc++.h>

using namespace std;



int sum_uoc(int k){
    int sum = 0;
    for (int i=1; i<=k; i++){
        if(k%i==0) sum+=i;
    }
    return sum;
}

int main(){
    string res = "";
    char x = '1';
    res = res + x;
    cout << res;
    return 0;
}
