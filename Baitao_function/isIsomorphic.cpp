#include<bits/stdc++.h>

using namespace std;

bool isIsomorphic(string str1, string str2){
    const int num_char = 26;
    int check[num_char];
    for(int i=0; i<num_char; i++){
        check[i] = 0;
    }
    char str_map[num_char];
    for(int i=0; i<num_char; i++){
        str_map[i] = '*';
    }

    for (int i=0; i<int(str1.length()); i++){
        int idx = (int)str1[i] - 97;
        int idx_used = (int)str2[i] - 97;
        if (check[idx_used])continue;
        check[idx_used] = 1;
        str_map[idx] = str2[i];
    }

    string res = "";
    for (int i=0; i<int(str1.length()); i++){
        int idx = (int)str1[i] - 97;
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

