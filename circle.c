#include <stdlib.h>
#include "circle.h"


void fiveCircles(struct circle c[]) 
{
/*post: returns an array with five struct circles - solution to 6.b*/
// 	Making a for-loop to make the 5 cirlces
	for(int i = 0; i < 5; i++)
	{
		c[i].p.x = i;	// Our first i in (i,i)
		c[i].p.y = i;	// Our second i in (i,i)
		c[i].r = i;		// Our radius of the struct circle
	}

/* Postcondition: Answer to exercise 6.b */
}

int circleIsValid(const struct circle * c)
{
/*post: answer to exercise 6.c*/
//  Checking if our radius is atleast 1, if not; then there's no circle.
	if(c->r < 1)
		return 1;
/* Postcondition: Answer to exercise 6.c */
	return 0;
}

void translate(struct circle* c, const struct point* p) 
{
/*ansver to exercise 6.d */ 

//  Adding two coordinates together
	c -> p.x + p -> x;
	c -> p.y + p -> y; 

// Postcondition answer to exercise 6.d */
}



