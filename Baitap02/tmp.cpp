#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a1, a2, a3;
    cin >> a1 >> a2 >> a3;

    double a_min;
    a_min = a2;
    if(a_min > a1){
        a_min = a1;
    }
    if(a_min > a3){
        a_min = a3;
    }
    cout << a_min << endl;

    return 0;
}
