#include<stdio.h>
#include<stdlib.h>

void initArray(int ***p, int n){
    int size_get = sizeof(int*);
    *p = malloc(n* size_get);
    for(int i=0; i<n; i++){
        p[i] = malloc(sizeof(int));
        *(p[i]) = 0;
    }
}

int main(){
    int **numbers;
    initArray(&numbers, 5); //dynamically allocates memory for numbers

    for(int i=0; i<5; i++){
        printf("%d ", numbers[i]);
    }
    // first call adds the number 1 to the first index in the array
    // (Since numbers is an int** remember to allocate space for each element)
    // each subsequent element should be added to the next available index
//    int a = 1, b = 2, c = 3, d = 4, e = 5;
//    int *p = &a, *q = &b, *r = &c, *s = &d, *t = &e;
//    addToArray(numbers, 5, p);
//    addToArray(numbers, 5, q);
//    addToArray(numbers, 5, r);
//    addToArray(numbers, 5, s);
//    addToArray(numbers, 5, t);
//    print(numbers, 5); //prints 1, 2, 3, 4, 5
//    swap(numbers, 0, 1); //swaps elements 0 and 1
//    print(numbers, 5); //prints 2, 1, 3, 4, 5
//    swap(numbers, 1, 3); //swaps elements 1 and 3
//    print(numbers, 5); //prints 2, 4, 3, 1, 5
//    swap(numbers, 4, 0); //swaps elements 4 and 0
//    print(numbers, 5); //prints 5, 4, 3, 1, 2
//    destroy(&numbers, 5) //assume function exists to free memory
}

