#include <iostream>
using namespace std;


int main () {
    const int n=4;
    string str[n];
    for(int i=0; i<n; i++){
        getline(cin, str[i]);
    }
    string tg;
    getline(cin, tg);

    int vt = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<tg.size(); j++){
            if(tg[j] == str[i][j]) continue;
            if(int(tg[j]) > int(str[i][j])){
                vt = vt+1;
            }
            break;
        }
    }
    cout << vt;
}

