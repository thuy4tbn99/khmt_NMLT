#include <stdlib.h>
#include <stdio.h>
int main(){
    const int n=5;
    int **chars = malloc(n * sizeof(int *));

//    printf("%d", sizeof(char));
    for(int i=0; i<n; i++){
//        printf("%p\n", chars[i]);

        chars[i] = malloc(sizeof(int));
//        printf("before %p\n", chars[i]);
        *(chars[i]) = i;
    }

    printf("Array contains:\n");
    for(int i = 0; i < n; i++){
        printf("%d\n", *(chars[i]));
    }
    return 0;
}
