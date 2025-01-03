#include<bits/stdc++.h>

using namespace std;

struct Vector{
    int x;
    int y;

    // ham khoi tao (constructor)
    Vector(){
        x=3;
        y=4;
    }
    // ham khoi tao 2
    Vector(int _x, int _y){
        x = _x;
        y = _y;
    }

    float dodai(){
        float leng = sqrt((float)x*x+float(y)*y);
        return leng;
    }

    int tong(){
        return x+y;
    }

    void intoado(){
        cout << "(" << x << "," << y << ")";
    }

//    Vector nhanban(){
//        Vector t;
//        t.x = x*x;
//        t.y = y*y;
//        return t;
//    }
};

Vector nhanban(const Vector &k){
    Vector t;
    t.x = k.x*k.x;
    t.y = k.y*k.y;
    return t;
}

float khoangcach(Vector a, Vector b){
    float result;
    result = sqrt((a.x-b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y));
    return result;
}

int main(){
//    Vector tmp;
//    Vector tmp;
//    cout << tmp.x << endl << tmp.y << endl<< tmp.dodai() << endl;
//    tmp.intoado();
//
////    Vector tmp2 = tmp.nhanban();
////    tmp2.intoado();
//
//    Vector tmp3 = nhanban(tmp);
//    tmp3.intoado();
//
//    cout << khoangcach(tmp, tmp3);

    // tao 1 mang struct co n phan tu. va gan gia tri lan luot la (1,1), (2,2),...
//    int n=3;
//    Vector arr[n];
//    for(int i=0; i<n; i++){
//        arr[i].x = i+1;
//        arr[i].y = i+1;
//        arr[i].intoado();
//        cout << endl;
//    }

    return 0;
}
