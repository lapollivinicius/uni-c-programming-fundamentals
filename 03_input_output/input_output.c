#include <stdio.h>

int main() {

    int age;
    char name[20];

	printf("what is your age: \n");
    scanf("%d", &age);

    printf("what is your name: \n");
    scanf("%s", name);

    printf("your name: %s \nyour age: %d years \n", name, age);
    
    return 0;
}