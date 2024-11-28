#include<bits/stdc++.h>

using namespace std;

bool isIsomorphic(string str1, string str2){
    int check[26];
    char str_map[26];

    for (int i=0; i<int(str1.length()); i++){
        int idx = (int)str1[i] - 97;
        check[idx] = 1;
        str_map[idx] = str2[i];
//        if(!check[idx]){
//            check[idx] = 1;
//            str_map[idx] = str2[i];
//        }
    }

    string res = "";
    for (int i=0; i<int(str1.length()); i++){
        int idx = (int)str1[i] - 97;
//        cout << str_map[idx] << endl;
        res += str_map[idx];
    }
    cout << res;


    return true;
}

int main(){
    string a, b;
    cin >> a >> b;
    isIsomorphic(a, b);

    return 0;
}

