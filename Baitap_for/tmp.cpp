#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int k = n-m+1;// so so nguyen trong khoang m n
    int so_phan_tu_dong1 = k%5;
    for (int i=m; i<m+so_phan_tu_dong1; i++){
        cout << i << " ";
    }
    cout << endl;

    int dem =0;
    for (int i=m+so_phan_tu_dong1; i<=n; i++){
        cout << i << " ";
        dem++;
        if (dem%5==0){
            cout << endl;
        }
    }
    return 0;
}
