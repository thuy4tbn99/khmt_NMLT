#include <iostream>
#include <algorithm>
using namespace std;

void sapxep(int a[], int n){
    for(int i=n-1; i>=0; i--){
        int i_m = i;
        for(int j=0; j<=i; j++){
            if(a[i_m] < a[j]) i_m = j;
        }
        swap(a[i_m], a[i]);
    }
}

void xuatmang(int a[], int n){
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

int findLHS(int arr[], int n) {
    sapxep(arr, n);
//    xuatmang(arr, n);
    int mp[n] = {0};
    int b[n];
    int spt_b = 0;
    int xh[n] = {0};
    for(int i=0; i<n; i++){
        if(mp[i])continue;
        int dem = 0;
        for(int j=i; j<n; j++){
            if(arr[j] == arr[i]){
                mp[j] = 1;
                dem++;
            }
        }
        b[spt_b] = arr[i];
        xh[spt_b] = dem;
        spt_b ++;
    }
    xuatmang(b, spt_b);
    xuatmang(xh, spt_b);
    int maxLength = 1;
    for(int i=0; i<spt_b; i++){
        if(b[i+1]-b[i]==1){
            int hls = xh[i]+ xh[i+1];

            if(maxLength<hls) maxLength=hls;
        }
    }
    return maxLength;
}

int main() {
    // 8 1 3 2 2 5 2 3 7
    int n; cin >> n; int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }


    cout << findLHS(a, n) << endl;

    return 0;
}

