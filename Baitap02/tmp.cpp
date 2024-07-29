#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    for (int i=0; i<n; i++){
        if (a[i]%3==0){
            for (int j=i+1; j<n; j++){
                if (a[j]%3==0 && a[j] > a[i]){
                    int tmp = a[j];
                    a[j] = a[i];
                    a[i] = tmp;
                }
            }
        }
    }
    for (int i=0; i<n; i++){
        cout << a[i] << " ";
    }
}
