#include<iostream>
using namespace std;
int main(){
    int a[1006];
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int value, pos;
    cin >> value >> pos;

    int pos_convert_to_i = pos-1;
    for(int i=n;i> pos_convert_to_i;i--){
        a[i] =a[i-1];
    }
    a[pos_convert_to_i]=value;
    for (int i=0;i<=n;i++){
        cout<<a[i]<<" ";
    }

    // C2
//    int new_a[n+1]; // 6=5+1
//    for (int i=0; i<pos_convert_to_i; i++){
//        new_a[i] = a[i];
//    }
//    new_a[2] = value;
//    for(int i=pos_convert_to_i+1; i<n+1; i++){
//        new_a[i] = a[i-1];
//    }
//
//    for(int i=0; i<n+1; i++){
//        cout << new_a[i] << " ";
//    }
    return 0;
}
