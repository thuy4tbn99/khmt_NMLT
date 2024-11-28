#include<iostream>
using namespace std;
int main(){
    int m, n;
    cin >> m >> n;
    int du = (n-m+1)%5;
    if (du>0){
        for(int i=0; i<du; i++){
            cout << m+i << " ";
        }
        cout << endl;
    }

    int dem = 0;
    for (int i=m+du; i<=n; i++){
        cout << i << " ";
        dem +=1;
        if (dem==5){
            cout << endl;
            dem = 0;
        }
    }

    return 0;
}

