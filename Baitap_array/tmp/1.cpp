#include <bits/stdc++.h>
using namespace std;

string cut_and_paste(string s, int n){
    string tmp="";
    int len = s.length();
    for(int i=0; i<n; i++){
        tmp += s[i];
    }
    string res = "";
    for(int i=n; i<len; i++){
        res +=s[i];
    }
    for(int i=0; i<n; i++){
        res += tmp[i];
    }
    return res;
}

double get_tax_amount(long long taxable_income){
    int gt = taxable_income;
    int sum_thue = 0;
    int res;
    if(gt>60){
        int thue = 60*5/100;
        sum_thue += thue;
        res = gt - 60 ;
    }

    if(gt>120){
        int thue = res*10/100;
        sum_thue += thue;
        res = gt- thue;
    }

    return sum_thue;


}

long long get_prime_sum(int a[], int n){
    return ...;
}

int main () {
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << get_prime_sum(a, n);
}


