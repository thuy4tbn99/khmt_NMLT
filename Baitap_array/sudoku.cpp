#include <iostream>
using namespace std;

bool is_belong_gr(int vt_h, int vt_c, string group){
    bool check = false;

    int gr_h = int(group[0])-48;
    int gr_c = int(group[1])-48;
    for(int i=gr_h; i<gr_h+3; i++){
        for(int j=gr_c; j<gr_c+3; j++){
            if (i==vt_h && j==vt_c) check=true;
        }
    }
    return check;
}

int main () {
    const int num_childs = 9;
    string str[num_childs] = {"00", "03","06", "30","33",
                            "36","60", "63","66"};
    int vt_h, vt_c;
    cin >> vt_h >> vt_c;
    for(int i=0; i<num_childs; i++){
        if(is_belong_gr(vt_h, vt_c, str[i])){
            cout << "is_belong_group: " << str[i] << endl;
            break;
        }
    }
}

