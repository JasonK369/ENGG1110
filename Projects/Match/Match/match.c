/*
Name: Kwong Lap Ting, Jason
SID: 1155083019
Session: ENGG1110B - BL01
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void genTable(double x[], double y[], int arraySize) {
	double table[arraySize][arraySize];

	//calculate all the value first
	for (int i = 0; i < arraySize; i++) {
		for (int j = 0; j < arraySize; j++) {
			if (i == j) {
				table[i][j] = 0.000;
			}
			else {
				table[i][j] = sqrt(pow((x[i] - x[j]), 2) + pow((y[i] - y[j]), 2));
			}
		}
	}

	printf("***Distance Table");
	for (int i = 0; i < arraySize; i++) {
		printf("|      p%d", i + 1);
	}

	printf("\n-----------------");
	for (int i = 0; i < arraySize; i++) {
		printf("+--------");
	}

	printf("\n");
	for (int i = 0; i < arraySize; i++) {
		printf("p%d (", i + 1);
		//print in different form in order to fit the size
		if (x[i] / 10.0 >= 1 || x[i] / -10.0 >= 1) {
			printf("%+.1lf,", x[i]);
		}
		else {
			printf(" %+.1lf,", x[i]);
		}

		//print in different form in order to fit the size
		if (y[i] / 10.0 >= 1 || y[i] / -10.0 >= 1) {
			printf(" %+.1lf)", y[i]);
		}
		else {
			printf("  %+.1lf)", y[i]);
		}

		for (int j = 0; j < arraySize; j++) {
			if (table[i][j] >= 100) {
				printf("| %.3lf", table[i][j]);
			}
			else if (table[i][j] >= 10) {
				printf("|  %.3lf", table[i][j]);
			}
			else {
				printf("|   %.3lf", table[i][j]);
			}

		}
		printf("\n");
	}
}

void genSelctedTable(double x[], double y[], int arraySize, int shortlist[]) {
	//array- selectX and selectY is for selected shortlisted value
	double selectX[arraySize], selectY[arraySize], table[arraySize][arraySize];

	for (int i = 0; i < arraySize; i++) {
		selectX[i] = x[shortlist[i]];
		selectY[i] = y[shortlist[i]];
	}
	//calculate all the value first
	for (int i = 0; i < arraySize; i++) {
		for (int j = 0; j < arraySize; j++) {
			if (i == j) {
				table[i][j] = 0.000;
			}
			else {
				table[i][j] = sqrt(pow((selectX[i] - selectX[j]), 2) + pow((selectY[i] - selectY[j]), 2));
			}
		}
	}

	printf("***Distance Table");
	for (int i = 0; i < arraySize; i++) {
		printf("|      p%d", i + 1);
	}

	printf("\n-----------------");
	for (int i = 0; i < arraySize; i++) {
		printf("+--------");
	}

	printf("\n");
	for (int i = 0; i < arraySize; i++) {
		printf("p%d (", i + 1);
		//print in different form in order to fit the size
		if (selectX[i] / 10.0 >= 1 || selectX[i] / -10.0 >= 1) {
			printf("%+.1lf,", selectX[i]);
		}
		else {
			printf(" %+.1lf,", selectX[i]);
		}
		//print in different form in order to fit the size
		if (selectY[i] / 10.0 >= 1 || selectY[i] / -10.0 >= 1) {
			printf(" %+.1lf)", selectY[i]);
		}
		else {
			printf("  %+.1lf)", selectY[i]);
		}
		//print in different form in order to fit the size
		for (int j = 0; j < arraySize; j++) {
			if (table[i][j] >= 100) {
				printf("| %.3lf", table[i][j]);
			}
			else if (table[i][j] >= 10) {
				printf("|  %.3lf", table[i][j]);
			}
			else {
				printf("|   %.3lf", table[i][j]);
			}

		}
		printf("\n");
	}
}

int main(void) {
	int size, counter = 0;
	printf("Point Matching\nThe following inputs are integers separated by whitespaces:\nHow many points [1-20]:");
	scanf("%d", &size);
	double x[size], y[size];//array for storing the x and y coordinate
	int shortlist[size];//array for storing the shortlisted value

	for (int i = 0; i < size; i++) {
		printf("Enter interest point %d (x%d y%d): ", i + 1, i + 1, i + 1);
		scanf("%lf%lf", &x[i], &y[i]);
	}
	printf("Checks\n");
	double largeX = x[0], largeY = y[0], smallX = x[0], smallY = y[0];

	for (int j = 0; j < size; j++) {
		printf("*** p%d ( %+.1lf, %+.1lf)\n", j + 1, x[j], y[j]);
	}

	//for loop finding smallest and largest x
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			//try to get the largest X
			if (x[j] > x[i] && x[j] > largeX)
				largeX = x[j];
			//try to get the smallest x
			if (x[j] < x[i] && x[j] < smallX)
				smallX = x[j];
		}
	}

	//for loop finding smallest and largest y
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			//try to get the largest Y
			if (y[j] > y[i] && y[j] > largeY)
				largeY = y[j];
			//try to get the smallest Y
			if (y[j] < y[i] && y[j] < smallY)
				smallY = y[j];
		}
	}

	//print information about the smallest, largest x and y coordinate
	printf("*** Smallest x: %.6lf\n*** Largest x: %.6lf\n", smallX, largeX);
	printf("*** Smallest y: %.6lf\n*** Largest y: %.6lf\n", smallY, largeY);

	//call function that generate the whole table
	genTable(x, y, size);
	for (int i = 0; i < size; i++) {
		shortlist[i] = 0;
	}
	//let user input the values they want to be shortlisted
	printf("Enter a list of points to be shortlisted [1-%d], other int to end:", size);
	for (int i = 0; i < size; i++) {
		scanf("%d", &shortlist[i]);
		if (shortlist[i] > size || shortlist[i] == 0)
			break;
		counter++;
	}

	int buildShortlistTable[counter]; //array that for function parameter

									  //copy array-shortlist to array-buildShortlistTable
	printf("***%d Shortlisted points:", counter);
	for (int i = 0; i < size; i++) {
		if (shortlist[i] < size && shortlist[i] != 0) {
			printf("p%d ", shortlist[i]);
			buildShortlistTable[i] = shortlist[i];
		}
	}
	printf("\n");
	//function call that build the shortlisted table
	genSelctedTable(x, y, counter, buildShortlistTable);


	return 0;
}
