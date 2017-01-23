#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int genNum(int in) {
	int num;
	time_t t;
	srand((unsigned) time(&t));
	num = rand()%in;
	num = ++num;
	return num;
}

int main() {
	int input;
	int guesses = 3;
	int guessed = 0;

	int num = genNum(10);

	printf("%d\n",num);
	while (guessed < guesses) {
		printf("Enter a number between 1 and 10: ");
		scanf(" %d",&input);getchar();
		if (input == num) {
			printf("You guessed correctly!\n");
			break;
		} else if (input > num) {
			printf("You weren\'t quite right :(\n");
			printf("Too large!\n\n");
		} else if (input < num) {
			printf("You weren\'t quite right :(\n");
			printf("Too small!\n\n");
		}
		guessed = ++guessed;
	}

	if(guessed >= guesses) {
		printf("You ran out of guesses :(\n");
	}

	return 0;
}