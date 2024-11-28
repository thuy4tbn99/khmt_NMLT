#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int x;
    cin >> x;

    // đk1: chia hết cho 3 thì cộng 3, nếu sai trừ 3. nếu đk1 đúng và x chia hết cho 5 thì nhân tiếp với 3. In ra giá trị cuối cùng của x
    bool cd1 = x%3==0;
    bool cd2 = x%5==1;

    int kq= x;
    if (cd1){
        kq = kq+3;
        if(cd2){
            kq = kq*3;
        }
    }
    else{
        kq = kq-3;
    }
    cout << kq;


}

