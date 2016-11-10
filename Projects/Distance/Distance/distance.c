//Name: Kwong Lap Ting, Jason
//SID: 1155083019

#define h "*** "
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


int main(void) {
	int x[3]; //array that contain values of x
	int y[3]; //array that contain values of y
	int counter = 1; //counter for the loop
	int largeX, largeY, smallX, smallY; //declare variables that contains the inputs
	double targetX, targetY;//variables for containing the way points
	double tmpX, tmpY;//for storing previous waypoint

	double distFromtat; //storing distance from target
	double sum = 0.0; //sum of distance travelled


	printf("Distance Measurment\n");
	printf("The following inputs are integers separated by whitespaces:\n");
	//get user inputs
	printf("Enter interest point 1 (x1 y1): ");
	scanf("%d%d", &x[0], &y[0]);
	printf("Enter interest point 1 (x2 y2): ");
	scanf("%d%d", &x[1], &y[1]);
	printf("Enter interest point 1 (x3 y3): ");
	scanf("%d%d", &x[2], &y[2]);

	//print user user input for checking
	printf("Checks:\n");
	printf("%s p1(%d, %d); p2(%d, %d); p3(%d, %d)\n", h, x[0], y[0], x[1], y[1], x[2], y[2]);

	double avgX = (x[0] + x[1] + x[2]) / 3.0;
	double avgY = (y[0] + y[1] + y[2]) / 3.0;

	//assume the first value is the smallest
	largeX = x[0];
	smallX = x[0];
	largeY = y[0];
	smallY = y[0];

	//for loop finding smallest and largest x
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			//try to get the largest X
			if (x[j] > x[i] && x[j] > largeX) 
				largeX = x[j];
			//try to get the smallest x
			if (x[j] < x[i] && x[j] < smallX)
				smallX = x[j];
		}
	}

	//for loop finding smallest and largest y
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			//try to get the largest Y
			if (y[j] > y[i] && y[j] > largeY)
				largeY = y[j];
			//try to get the smallest Y
			if (y[j] < y[i] && y[j] < smallY)
				smallY = y[j];
		}
	}

	//print information about the centroid
	printf("%sSmallest x: %d\n%sLargest x: %d\n", h, smallX, h, largeX);
	printf("%sSmallest y: %d\n%sLargest y: %d\n", h, smallY, h, largeY);

	printf("%sCentroid = (Avg x, Avg y) = (%.6lf, %.6lf)\n", h, avgX, avgY);
	
	//print the distance between each point
	printf("%sDistance p1-p2 = %.6lf\n", h, sqrt(pow((x[0] - x[1]), 2) + pow((y[0] - y[1]), 2)));
	printf("%sDistance p2-p3 = %.6lf\n", h, sqrt(pow((x[1] - x[2]), 2) + pow((y[1] - y[2]), 2)));
	printf("%sDistance p3-p1 = %.6lf\n", h, sqrt(pow((x[2] - x[0]), 2) + pow((y[2] - y[0]), 2)));

	printf("Enter as many way points as you like until reaching the goal\n");
	printf("Our goal is to hit the centroid within an error of 1e-5\n");
	printf("The following inputs are doubles separated by whitespaces:\n");

	//while loop for getting user input
	while (1) {
		printf("Enter way point %d (wx%d wy%d): ", counter, counter, counter);
		scanf("%lf%lf", &targetX, &targetY); //get user input
		distFromtat = sqrt(pow((targetX - avgX), 2) + pow((targetY - avgY), 2));
		printf("%sDistance of way point %d from centroid = %lf\n", h, counter, distFromtat);


		if (counter == 1) {
			printf("%sTotal distance travelled = 0.000000\n", h);
		}
		else {
			sum = sum + sqrt(pow(tmpX - targetX, 2) + pow(tmpY - targetY, 2));
			printf("%sTotal distance travelled =  %lf\n", h, sum);
		}

		tmpX = targetX;
		tmpY = targetY;

		if (distFromtat <= 0.00001) //control when will the user exit the loop
			break;

		distFromtat = 0.0; //reset the value prevent any error
		counter++;
	}

	
	return 0;
}