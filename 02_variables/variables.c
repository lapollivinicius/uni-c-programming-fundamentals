#include <stdio.h>

int main() {
    int age = 25;
    float height = 1.67;
    double pi = 3.1416;
    char letter = 66;
    char name[6] = "joao";

    printf("age: %d years \n", age);
    printf("height: %.2fm \n", height);
    printf("pi: %lf\n", pi);
    printf("letter: %c\n", letter);
    printf("name: %s\n", name);
    return 0;
}