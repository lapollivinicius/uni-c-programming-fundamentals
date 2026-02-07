#include <stdio.h>

int main() {

    int note1, note2;
    float finalNote;

    printf("first note: ");
    scanf(" %d", &note1);

    printf("second note: ");
    scanf(" %d", &note2);

    printf("=============== \n");

    finalNote = (float) (note1 + note2) / 2;

    printf("your final note is %.1f \n", finalNote);

    if (finalNote >= 7) {

        if (finalNote >= 9) {
            printf("you were very good \n");
        } else if (finalNote < 9) {
            printf("good, but you can be better \n");
        }

    } else if (finalNote < 7) {

        if (finalNote >= 6) {
            printf("you need study more \n");
        } else if (finalNote <= 5) {
            printf("you need more help, text me! \n");
        }

    }

}