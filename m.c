#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

// Function accepting structure as parameter
void display(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %d",
           s.name, s.roll, s.marks);
}

int main() {
    struct Student s;

    printf("Enter Student Name: ");
    scanf("%s", s.name);

    printf("Enter Roll: ");
    scanf("%d", &s.roll);

    printf("Enter Marks: ");
    scanf("%d", &s.marks);

    display(s);

    return 0;
}