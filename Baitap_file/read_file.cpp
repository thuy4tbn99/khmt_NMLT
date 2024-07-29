#include<bits/stdc++.h>

using namespace std;


int main(){
    string path ;
    cin >> path;
    ifstream ff (path);

    // y nghia cau lenh return trong ham main
    if (!ff){
        cerr << "Error open file:" << path;
        return -1;
    }


    while (! ff.eof()){
        int x;
        ff >> x ;
        cout << x << " ";
    }
    return 0;
}
