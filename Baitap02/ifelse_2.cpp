#include<bits/stdc++.h>
using namespace std;
int main(){
    int X;
    cin>>X;
    if(X%3==0){
        cout<<"bingo dk1"<<endl;
    }
    else {
        cout<<"sai dk1"<<endl;
    }



    if(X%5==1){
        cout<<"bingo dk2"<<endl;
    }
    else {
        cout<<"sai dk2"<<endl;
    }


    if(X%3==0&&X%5==1){
        cout<<"bingo!!!";
    }
    return 0;
}
