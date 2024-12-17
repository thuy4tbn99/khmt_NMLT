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
    struct StudentList* tmp;
    tmp = malloc(sizeof(struct StudentList)); // cap phat bo nho
//    tmp->head = malloc(sizeof(struct Student));
    tmp->head = NULL;
    return tmp;
};

void insertStudent(struct StudentList* linh, char* name, float grade){
    // tao student moi
    struct Student* new_student;
    new_student = malloc(sizeof(struct Student));
    new_student->name = malloc(strlen(name)+1);
    strcpy(new_student->name, name);
    new_student->grade = grade;

    new_student->next = malloc(sizeof(struct Student));
    new_student->next = linh->head;
    linh->head = new_student;
}

void destroy(struct StudentList* stlist){

}

int main(){
//    printf("%d", sizeof(struct StudentList));
    struct StudentList* studentList;
    studentList = createStudentList();
    insertStudent(studentList, "Alice", 3.7); //list = Alice
    insertStudent(studentList, "Bob", 3.2);
    insertStudent(studentList, "Linh", 3.8);

    float sumGrade = 0;
    struct Student* curr = studentList->head;
    while(curr!=NULL){
        sumGrade += curr-> grade;
        curr = curr->next;
    }
    printf("%f", sumGrade);




//    struct Student* current = studentList->head;
//    while (current != NULL) {
//        printf("Name: %s, Grade: %.2f\n", current->name, current->grade);
//        current = current->next;
//    }


//    destroy(studentList);
    return 0;
}
