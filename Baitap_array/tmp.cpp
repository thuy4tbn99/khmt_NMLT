#include <iostream>
using namespace std;


int main () {
    int n=5;

    for(int i=0; i<n; i++){
        int n_space = 2*i;
        int n_star = n-i;
        for(int j=0; j<n_space; j++){
            cout << ' ';
        }
        for(int j=0; j<n_star; j++){
            cout << '*';
        }
        cout << endl;
    }

}

