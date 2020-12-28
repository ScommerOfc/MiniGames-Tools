#include <stdio.h>
#include <time.h>
#include <random>

void main() {
	srand(time(NULL));
	int headTails = 0;
	char input = ' ';

	for (int i = 0;  ;  i++) {
		printf("Enter E to end the program, enter anything else to flip a coin!\n");
		scanf_s("%c", &input);
			if(input == 'E')
				break;
			else 
		headTails = rand() % 2;
			if (headTails == 0)
				printf("Coin landed on Heads\n");
			else if (headTails == 1)
				printf("Coin landed on Tails\n");
	}
}
