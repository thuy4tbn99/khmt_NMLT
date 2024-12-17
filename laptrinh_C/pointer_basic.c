#include<stdio.h>
#include<stdlib.h>
#include <string.h>


int main(){
//    int n=3;
//    int a[n];
//    for(int i=0;i<n; i++){
//        scanf("%d", &a[i]);
//    }
//
//    for(int i=0;i<n; i++){
//        printf("%d ", a[i]);
//    }

//    int x=3;
//    printf("%d %p", x, &x);

    // con tro 1 phan tu
//    int *a;
//    a = malloc(sizeof(int));
//    printf("%p\n", a);
//    int x = 3;
//    printf("%p\n", &x);
//    a = &x;
//    printf("%d %p", *a, a);

    // con tro n phan tu ~ mang 1 chieu
    int n=3;
    int* a;
    a = malloc(sizeof(int));
//    printf("%p\n", a);
//    for(int i=0; i<n; i++){
//        scanf("%d", &a[i]);
//    }
//
//    for(int i=0; i<n; i++){
//        printf("%d ", a[i]);
//    }
//    free(a);


    // con tro - mang 2 chieu
    int **a;
    int sohang=2, socot=3;
    a = malloc(sohang*sizeof(int*)); // cap phat bo nho cho 'sohang' pointers

    for(int i=0; i<sohang; i++){
        a[i] = malloc(socot*sizeof(int));
    }
    return 0;
}

