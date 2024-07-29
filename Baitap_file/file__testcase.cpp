#include <bits/stdc++.h>

using namespace std;

void read_file(int &n, int a[]){
    string path = "testcase.txt";
    ifstream ff(path);

    if (!ff){
        cerr << "Error open file!";
    }
    while(!ff.eof()){
        ff >> n;
        for (int i=0; i<n; i++){
            ff >> a[i];
        }
    }
}

int main(){
    int n;

    int a[10000];
    read_file(n, a);
    cout << n << endl;
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    cout << endl;

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
