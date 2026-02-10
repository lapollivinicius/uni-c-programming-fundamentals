#include <stdio.h>

int main() {

    struct student {
        char name[50];
        int grade;
    };

    struct student students[] = {
        {"John", 100},
        {"Anne", 45},
        {"Bryan", 69}
    };

    int size = sizeof(students);

    for(int index = 0 ; index < size ; index++) {
        printf("%s recive %d points\n", students[index].name, students[index].grade);
    }
}