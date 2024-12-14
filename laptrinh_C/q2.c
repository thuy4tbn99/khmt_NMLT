#include <stdio.h>
#include <string.h>

typedef int Quantity;

typedef struct {
    char name[20];
    Quantity quantity;
    float price;
} Item;

int main(){
    Item items[3];
    strcpy(items[0].name, "Tomato");
    items[0].quantity = 10;
    items[0].price = 2.0;
    strcpy(items[1].name, "Carrot");
    items[1].quantity = 40;
    items[1].price = 1.7;
    strcpy(items[2].name, "Cucumber");
    items[2].quantity = 0;
    items[2].price = 2.5;
    #ifdef RESTOCK
    for (int i = 0; i < 3; i++){
        items[i].quantity += 100;
    }
    #endif
    #ifdef FULL
    for (int i = 0; i < 3; i++){
        printf("%d %ss at %.2f per piece\n", items[i].quantity,
        items[i].name, items[i].price);
    }
    #else
    for (int i = 0; i < 3; i++){
        printf("%ss at %.2f per piece\n", items[i].name,
        items[i].price);
    }
    #endif
    return 0;

}
