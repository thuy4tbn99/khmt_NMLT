#include <bits/stdc++.h>
using namespace std;

int main()
{
//    string str;
//    cin >> str;
////    getline(cin, str);
////    cout << str.length();
//    for (int k=0; k<str.length(); k ++){
//        cout << str[k] << endl;
//    }

    string tmp = "truong";
    for (int k=0; k<tmp.length(); k++){
        if(tmp[k]=='t'){
            tmp[k] = 'm';
        }
    }
    cout << tmp;
}

