#include <iostream>
using namespace std;

bool compare_str(string thu, string quang){
    bool check=true;
    for(int k=0; k<int(thu.length()); k++){
        if(thu[k] != quang[k]){
            check = false;
            break;
        }
    }

    return check;
}

string get_word(string str, int leng, int vt_bd){
    string word = "";
    for(int i=vt_bd; i< vt_bd+leng; i++){
        word = word+str[i];
    }
    return word;
}

int main () {
    string str;
    getline(cin, str);
    string tg;
    getline(cin, tg);

    int str_len = str.length(); // so ky tu cua str
    int tg_len = tg.length();   // so ky tu cua tg

    int dem = 0;
    for(int i=0; i<str_len-tg_len; i++){
        string word = get_word(str, tg_len, i);

        bool check = compare_str(word, tg);
        if(check==true) dem++;
    }
    cout << dem;
}

