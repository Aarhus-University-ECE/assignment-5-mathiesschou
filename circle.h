#pragma once

typedef struct point  {
	int x;
	int y;
} point;




/*add your definition of circle here. You need top call it "circle"*/
typedef struct circle {
	int r; 		// radius 
	point p; 	// our center-coordinate
} circle;


void fiveCircles(struct circle c[]);
int circleIsValid(const struct circle* c);
void translate(struct circle* c, const struct point* p);