#include <iostream>
using namespace std;


int main() {
    int n;
    cin >> n;
    int cs_max = -1;
    while(true){
        if(n==0){
            break;
        }

        int cs = n%10;
        n = n/10;
        if(cs > cs_max){
            cs_max = cs;
        }
    }
    cout << cs_max;

	return 0;


}
