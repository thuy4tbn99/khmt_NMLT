#include<bits/stdc++.h>

using namespace std;



int main(){
    int n=5;
    int a[n] = {12,9,3,5,8};

    int k=0;
    for(int i=0; i<n; i++){
        if (a[i]%2==1){
            k++;
        }
    }
//    cout << k;
    int b[k];
    int j = 0;
    for(int i=0; i<n; i++){
        if(a[i]%2==1){
            b[j] = a[i];
            j++;
        }
    }

    for(int i=0; i<k; i++){
        cout << b[i] << " ";
    }

    for(int i=0; i<n;)

    // 12 3 5 9 8
}
