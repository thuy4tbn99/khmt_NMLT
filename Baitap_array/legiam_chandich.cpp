#include <bits/stdc++.h>
using namespace std;

void nhapmang(int a[], int n){
    for(int i=0; i<n;i++){
        cin >> a[i];
    }
}

void xuatmang(int a[], int n){
    for(int i=0; i<n;i++){
        cout <<  a[i] << " ";
    }
    cout << endl;
}

void move_2(int a[], int n, int a_new[]){
    for(int i=0; i<n; i++){
        int i_new = (i+2)%n;
        a_new[i_new] = a[i];
    }
}

int main () {
    int n;
    cin >> n;
    int a[n];
    nhapmang(a, n);

    int a_le[n];
    int spt_le = 0;
    int a_chan[n];
    int spt_chan = 0;

    for(int i=0; i<n; i++){
        if (a[i]%2==1){
            a_le[spt_le] = a[i];
            spt_le++;
        }
        else{
            a_chan[spt_chan] = a[i];
            spt_chan++;
        }
    }
    sort(a_le, a_le+spt_le, greater<int>());
//    xuatmang(a_le, spt_le);
    int a_chan_move[spt_chan];
    move_2(a_chan, spt_chan, a_chan_move);
//    xuatmang(a_chan_move, spt_chan);

    int le_bd = 0;
    int chan_bd = 0;
    for(int i=0; i<n; i++){
        if(a[i]%2==0){
            a[i] = a_chan_move[chan_bd];
            chan_bd++;
        }
        else{
            a[i] = a_le[le_bd];
            le_bd++;
        }
    }
    xuatmang(a, n);


}

