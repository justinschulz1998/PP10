#include <stdio.h>
#include <math.h>
#include "point.h"

int main() {
	    Point p = {3.0, 4.0};
	        double distance = sqrt(p.x * p.x + p.y * p.y);
		    printf("Distance from origin: %.2f\n", distance);
		        return 0;
}

