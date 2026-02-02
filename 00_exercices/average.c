#include <stdio.h>

int main() {

    float note1 = 0.0;
    float note2 = 0.0;
    float avarageFinal = 0.0;

    printf("digit the first note: ");
    scanf("%f", &note1);

    printf("digit the first note: ");
    scanf("%f", &note2);

    avarageFinal = (note1 + note2) / 2;

    printf("the student's final average is %.1f \n", avarageFinal);

    return 0;
}