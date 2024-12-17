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

int main(){

    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);

    cout << compare_str(str1, str2);
}
