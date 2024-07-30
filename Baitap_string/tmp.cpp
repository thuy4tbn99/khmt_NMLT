#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int i,j;
    cin >> i >> j;
    char tmp = str[i];
    str[i] = str[j];
    str[j] = tmp;
    cout << str;
}


