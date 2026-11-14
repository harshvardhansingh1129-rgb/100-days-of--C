#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student s[3];
    int i, topper = 0;

    // Input details of 3 students
    for (i = 0; i < 3; i++) {
        printf("Enter name, roll number and marks of student %d:\n", i + 1);
        scanf("%s %d %d", s[i].name, &s[i].roll_no, &s[i].marks);
    }

    // Find student with highest marks
    for (i = 1; i < 3; i++) {
        if (s[i].marks > s[topper].marks) {
            topper = i;
        }
    }

    // Print topper
    printf("Topper: %s (Marks: %d)\n",
           s[topper].name, s[topper].marks);

    return 0;
}