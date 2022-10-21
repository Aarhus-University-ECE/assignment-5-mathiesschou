#include <stdio.h>
#include <stdlib.h> // malloc funktion i mac
#include <assert.h> // assert til når vi tjekke om vores int n i
					// jolly jumper er over 0 
#include "circle.h"
#include "jollyjumper.h"


void printCircle(struct circle c) 
{
	printf("p.x: %d, p.y: %d, r: %d\n", c.p.x, c.p.y, c.r);
}

int main(void) 
{
	/*testing circles - make sure that you know how it works and what it is supposed to print out*/
	struct circle c[5];
	fiveCircles(c);
	for (int i = 0; i < 5; i++) {
		printCircle(c[i]);
	}
	struct point p = { .x = 1, .y = 2};
	p.x = 2;
	p.y = 2;
	translate(&c[1], &p);
	printCircle(c[1]);
	printf("isValid: %d", circleIsValid(&c[1]));

	/*answer to exercise 7.b*/
	int n; /*number of numbers to read*/
	/*reading n and check that is is OK*/

	scanf("%d", &n); // scanner vores array størrelse
	assert(n > 0); // assert, hvis vores n er mindre en 0

	int *numbers = malloc(sizeof(int) * n); /*the numbers read*/
	// allokerer hukommelse til vores række med tal

	/*reading the n numbers in the array numbers*/

	// laver en for-løkke til at scanne vores række
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &numbers[i]);
	}
	

	if (isJollyJumber(numbers, n)) {
		printf("it is a Jolly Jumper");}
	else {
		printf("not a Jolly Jumper");}

	return 0;
}
