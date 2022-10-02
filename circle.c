/* Week 5, exercise 6 */
#include <stdio.h>
#include <malloc.h>
#include "circle.h"

// Point struct
typedef struct
{
	int x;	// x-coordinate
	int y;	// y-coordinate 
} point; 

// Circle struct
typedef struct
{
	point p; 	// our center-coordinate
	int r: 		// radius 
} circle;
/* Postcondition: A C struct that represents a circle*/


void fiveCircles(int c[]) 
{
// 	Making a for-loop to make the 5 cirlces
	for(int i = 0; i < 5; i++)
	{
		c[].p.x = i;	// Our first i in (i,i)
		c[].p.y = i;	// Our second i in (i,i)
		c[].r = i;		// Our radius of the circle
	}

/* Postcondition: Answer to exercise 6.b */
}

int circleIsValid(const circle * c) 
{
//  Checking if our radius is positive, if not; then there's no circle
	if(c > 0)
		return 0;
	else if(c == 0)
		return 1;
	else(c < 0)
		return 1;

	return 0;
/* Postcondition: Answer to exercise 6.c */
}

void translate(circle* c, const point* p) 
{
//  Adding two coordinates together
	c -> p.x + p -> x;
	c -> p.y + p -> y; 

/* Postcondition nswer to exercise 6.d */
}