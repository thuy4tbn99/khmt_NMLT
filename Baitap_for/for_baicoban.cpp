
#include<iostream>

using namespace std;

int main(){
    // tong tu 1->10
    int sum = 0;
    for (int i=1; i<=10; i++){
        if(i==5 || i==7){
            continue;
        }
        sum = sum + i;
    }
    cout << sum << endl;


//     tong tu 1 -> 10, bo qua 5 va 7


    return 0;
}
