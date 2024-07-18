#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

/*
    // tim kiem
    for (int i=0; i<n; i++){
        // in cac phan tu chan
//        if (a[i]%2==0){
//            cout << a[i] << " "j
//        }

        // sua cac phan tu >4 thanh 4
        if (a[i]>4){
            a[i] = 4;
        }
        cout << a[i] << " ";
    }
*/
/*
    // insert
    int ins_pos = 2;
    int ins_value = 12;

    int new_a[n+1]; // 6=5+1
    for (int i=0; i<ins_pos; i++){
        new_a[i] = a[i];
    }
    new_a[2] = ins_value;
    for(int i=ins_pos+1; i<n+1; i++){
        new_a[i] = a[i-1];
    }

    for(int i=0; i<n+1; i++){
        cout << new_a[i] << " ";
    }
*/

    // sort
    // C1: selection sort
    for (int i=0; i<n; i++){
        int minIndex = i;
        for (int j=i; j<n; j++){
            if(a[j] < a[minIndex]){
                minIndex = j;
            }
        }

        // doi cho
        int tmp = a[i];
        a[i] = a[minIndex];
        a[minIndex] = tmp;
    }

    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }

    // C2: bubble sort
//    for (int i=0; i<n-1; i++){
//        for (int j=0; j<n-1; j++){
//            cout << a[j] << " " << a[j+1] << endl;
//            if(a[j] < a[j+1]){
//                int tmp = a[j];
//                a[j] = a[j+1];
//                a[j+1] = tmp;
//            }
//            for(int i=0; i<n; i++){
//                cout << a[i] << " ";
//            }
//            cout << endl;
//        }
//    }

    return 0;
}

