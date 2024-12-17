#include <stdlib.h>
#include <stdio.h>

int add(int x, int y){
    int sum = x+y;
    return sum;
}

int main(){
    int a=3, b=2;
    int sum;
    sum = add(a,b);
    printf("%d", sum);
    return 0;
}
