#include <stdio.h>

void loop(int i) {
	if (i > 0) {
		printf("%d \n", i);
		loop(i - 1);
	}
}

int main() {

    loop(5);

}