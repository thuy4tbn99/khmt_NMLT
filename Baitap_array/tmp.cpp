#include <iostream>
using namespace std;

int main()
{
   int n=5;
   int a[n] = {1,2,3,1,1};


   int count_dt = 0;
   int b[n];
   for (int i=0; i<n; i++){
        b[i] = -9999;
   }

   int count_unique = 0;
   for (int i=0; i<n; i++){
        bool check = true;
        for(int j=0; j<n; j++){
            if (a[i] == b[j]) check = false;
        }
        if(check){
            b[i] = a[i];
            count_unique+=1;
        }
   }
   for(int i=0; i<count_unique; i++){
        cout << b[i] << " ";
   }
}
