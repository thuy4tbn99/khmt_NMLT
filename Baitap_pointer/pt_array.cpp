
#include<bits/stdc++.h>

using namespace std;


int main(){
    int n = 3;
    int *ptr = new int[n];
    for (int i=0; i<n; i++){
//        cin >> ptr[i];
//        *(ptr+i) = i+10;
        ptr[i] = i+10;
    }
//    cout << ptr << " "  << ptr+1 << endl;
//    cout << *ptr << endl;
//    cout << *(ptr+1) << endl;

    for (int i=0; i<n; i++){
        cout << ptr[i] << " ";
    }

    return 0;
}
