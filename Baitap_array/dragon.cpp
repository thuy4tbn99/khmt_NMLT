#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n=9;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    int num_heads = 3;
    int num_tails = 3;
    bool check_invalid = false;
    for (int i=0; i<n; i++){
        if(a[i] == 1){
        }
        else if (a[i] == 2){
            num_tails +=1;
        }
        else if(a[i]==3){
            num_heads-=2;
        }
        else if (a[i]==4){
            num_heads+=1;
            num_tails-=2;
        }
        if(num_heads<0 || num_tails <0){
            check_invalid=true;
            break;
        }
    }

    if(check_invalid){
        cout << "invalid attack";
    }
    else{
        if (num_heads==0 && num_tails==0){
            cout << "You slayed the Dragon.";
        }
        else cout << "You die.";
    }
}

