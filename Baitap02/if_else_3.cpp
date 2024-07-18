#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int x;
    cin >> x;

    bool cd1 = x%3==0;
    bool cd2 = x%5==1;

    if(cd1==true){
        x = x+3;
        if(cd2==true){
            x = x*3;
        }
    }
    else{
        x = x-3;
    }
    cout << x ;

    return 0;

}

