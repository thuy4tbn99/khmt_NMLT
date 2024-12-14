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

struct StudentList* createStudentList(){
    struct StudentList* newList = malloc(sizeof(struct StudentList));
    newList->head = NULL;
    return newList;
};

void insertStudent(struct StudentList* stlist, char* n_name, float n_grade){
    struct Student* n_student = malloc(sizeof(struct Student)); // cap phat bo nho cho n_student
    n_student->name = malloc((strlen(n_name))+1); // bao gom ca ky tu ket thuc '\0'
    strcpy(n_student->name, n_name);
    n_student->grade= n_grade;
    n_student->next = stlist->head;
    stlist->head=n_student;
}

void destroy(struct StudentList* stlist){
    struct Student* current = stlist->head;
    while(current !=NULL){
        struct Student* tmp = current;
        current = current->next;
//        printf("Name: %s, Grade: %.2f\n", tmp->name, tmp->grade);
        free(tmp->name);
        free(tmp);
//        printf("After Name: %s, Grade: %.2f\n", tmp->name, tmp->grade);
    }
    free(stlist);
}

int main(){
//    printf("%d", sizeof(struct StudentList));
    struct StudentList *studentList = createStudentList();
    insertStudent(studentList, "Alice", 3.7); //list = Alice
    insertStudent(studentList, "Bob", 3.2);



    struct Student* current = studentList->head;
    while (current != NULL) {
        printf("Name: %s, Grade: %.2f\n", current->name, current->grade);
        current = current->next;
    }
    destroy(studentList);
    return 0;
}
