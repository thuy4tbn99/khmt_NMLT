
#include<bits/stdc++.h>

using namespace std;



int main(){
//    const int n=10; // thay doi gia tri n, n se bao gom ca ky tu null-ketthuc
//    char path[n];
//    cin.getline(path, n);
//    cout << path;

//    const char* path = "1.txt";
//    string path = "1.txt";
    const char path[256];
//    const char path[256] = "D:/DATA/uet/kmht/giangday/Tin 4/baitap_demo/Baitap_file/1.txt";
    ifstream ff (path);


    // y nghia cau lenh return trong ham main
    if (!ff){
        cerr << "Error open file:" << path;
        return -1;
    }


    while (!ff.eof()){
        int x;
        ff >> x ;
        cout << x << " ";
    }
    return 0;
}
