#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int x_n2 = 0;
    int x_n1 =1;



    for (int i=0; i<n; i++){
        if (i==0){
            cout << x_n2 << " ";
            continue;
        }
        if (i==1){
            cout << x_n1 << " " ;
            continue;
        }
        int x_n = x_n1 + x_n2;
        cout << x_n << " ";
        x_n2 = x_n1;
        x_n1 = x_n;
    }

    return 0;
}
