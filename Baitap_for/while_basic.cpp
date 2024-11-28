
#include<iostream>

using namespace std;

int main(){
//    for (int i=0; i<5; i++){
//        cout << i << endl;
//    }

    // convert to while
    int i =0;
    while(i<5){
        cout << i << endl;
        i++;
    }

    while(true){
        if (i>=5){
            break;
        }
        cout << i << endl;
        i++;
    }

    return 0;
}

