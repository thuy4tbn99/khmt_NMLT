#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    // tim loi sai
    int n;
    cin>>n;
    float a[n];
    float max1 = a[0];
    float min1 =a[0];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int i=0;i<n;i++){
        if (a[i]>max1) { max1 =a[i];}
    }
    for (int i=0;i<n;i++){
        if (a[i]<min1) {min1=a[i];}
    }
    cout<<fixed<<setprecision(2)<<max1<<" "<<min1;
}
