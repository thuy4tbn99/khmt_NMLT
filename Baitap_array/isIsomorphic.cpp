#include<bits/stdc++.h>

using namespace std;
bool isIsomorphic(string str1, string str2){
    const int num_chars = 26;
    char str_map[num_chars];
    for(int i=0; i<num_chars; i++){
        str_map[i] = '*';
    }

    int check[num_chars];
    for(int i=0; i<num_chars; i++){
        check[i] = 0;
    }

    for (int i=0; i<int(str1.length()); i++){
        int idx = (int)str1[i] - 97;
        int idx_used = (int)str2[i] - 97;

        if(check[idx_used] ==1) continue;

        str_map[idx] = str2[i];
        check[idx_used] = 1;
    }

    string res = "";
    for (int i=0; i<int(str1.length()); i++){
        int idx = (int)str1[i] - 97;
        res += str_map[idx];
    }
    cout << res;
    return true; // can code them
}

int main(){
    string a, b;
    cin >> a >> b;

    isIsomorphic(a,b);
    return 0;
}


