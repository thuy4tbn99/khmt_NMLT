#include <bits/stdc++.h>
using namespace std;

void trim_right(char *s, int len) {
    len = strlen(s);
    cout << s[len - 1] << "||";
    while (s[len - 1] == ' ') {

        len--;
    }
    s[len] = '\0';
}
int main()
{
    char s[256];
    int n;
    cin.getline(s, 256);
    cin >> n;


    trim_right(s,n);
    cout << s << "||" << endl;
    return 0;
}

