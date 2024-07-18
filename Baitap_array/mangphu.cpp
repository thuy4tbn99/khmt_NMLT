#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    bool b[n];
    for(int i=0; i<n-1;i++){
        if(a[i]==a[i+1]){
            b[i] = false;
        }
        else b[i]= true;
    }
    b[n-1] = true;

    for(int i=0; i<n; i++){
        if (b[i]){
            cout << a[i] << " ";
        }
    }
    return 0;
}
