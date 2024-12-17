#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 256

void append_flavour(const char *filename) {
    char flavour[MAX_LENGTH];
    char regular_price[MAX_LENGTH];
    char seasonal_price[MAX_LENGTH];

    printf("Enter the name of the new flavour: ");
    scanf(" %s;", flavour); // Read the full line with spaces

    printf("Enter the regular price: ");
    scanf(" %s", regular_price);

    printf("Enter the seasonal price: ");
    scanf(" %s", seasonal_price);

    FILE *file = fopen(filename, "a");
    if (file == NULL) {
        perror("Error opening file");
        return;
    }

    fprintf(file, "%s,$%s,$%s\n", flavour, regular_price, seasonal_price);
    fclose(file);

    printf("Flavour added successfully!\n");
}

void print_flavours(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        return;
    }

    char line[MAX_LENGTH];
    printf("\nList of flavours:\n");
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }

    fclose(file);
}

int main() {
    const char *filename = "flavours.txt";
    int choice;

    while (1) {
        printf("\nIce Cream Flavours Management\n");
        printf("1. Input a new flavour\n");
        printf("2. Print & Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            append_flavour(filename);
        } else if (choice == 2) {
            print_flavours(filename);
            printf("\nGoodbye!\n");
            break;
        } else {
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
