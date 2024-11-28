#include<bits/stdc++.h>

using namespace std;


int main(){
    int n;
    cin >>n;
    string spc = " ";
    int sum = n;

    for(int i = n; i >0 ; i--){
        for(int k = 0;k<(sum - i);k++){
            cout<<spc;
        }
        for(int j = 0;j<i;j++){
            cout<<"*";
        }
        sum+=1;
        cout<<endl;
    }

    return 0;
}

