#include <bits/stdc++.h>
using namespace std;

int main(){
	long int S = 0;
	int n;
	cin >> n;
	for(int i=1; i<=n; i++){
        int luythua = 1;
        for(int j=1; j<=i; j++){
            luythua = luythua*i;
        }
        S = S+luythua;
	}
	cout << S;
}

