#include<stdio.h>
#include<stdlib.h>
#include <string.h>


struct Student{
	char* name;
	float grade;
	struct Student* next;
};

struct StudentList{
	struct Student* head;
};




int main(){
    struct StudentList* stlist = malloc(sizeof(struct StudentList));
    struct Student* tmp = malloc(sizeof(struct Student));
    tmp->name = strdup("John Doe");
    tmp->grade = 4.3;
    tmp ->next = NULL;
    stlist->head =tmp;

    struct Student* current = stlist->head;
    while(current !=NULL){
        struct Student* tmp = current;
        current = current->next;
        free(tmp->name);
        free(tmp);
    }
    free(stlist);
    stlist->head = NULL;
    return 0;
}
