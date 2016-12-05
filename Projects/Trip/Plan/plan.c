/**
* ENGG1110 Problem Solving by Programming
*
* Project Phase 3
*
* I declare that the assignment here submitted is original
* except for source material explicitly acknowledged,
* and that the same or closely related material has not been
* previously submitted for another course.
* I also acknowledge that I am aware of University policy and
* regulations on honesty in academic work, and of the disciplinary
* guidelines and procedures applicable to breaches of such
* policy and regulations, as contained in the website.
*
* University Guideline on Academic Honesty:
*   http://www.cuhk.edu.hk/policy/academichonesty/
*
* Student Name : Kwong Lap Ting
* Student ID   : 1155083019
* Class/Section: BL01
* Date         : 29/11/2016
*/

#define _CRT_SECURE_NO_WARNINGS // to disable Microsoft VS warnings
#include <stdio.h> // standard i/o header file
#include <math.h> // math header file
#include <string.h> // string header file

void genTable(double x[], double y[], int size) {
	printf("\n");
	double table[20][20];
	float epsilon10 = 10.000000001;
	float epsilon100 = 100.000000001;

	//calculate all the value first
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i == j) {
				table[i][j] = 0.000;
			}
			else {
				table[i][j] = sqrt(pow((x[i] - x[j]), 2) + pow((y[i] - y[j]), 2));
			}
		}
	}

	printf("***Distance Table");
	for (int i = 0; i < size; i++) {
		printf("|      p%d", i + 1);
	}

	printf("\n-----------------");
	for (int i = 0; i < size; i++) {
		printf("+--------");
	}

	printf("\n");
	for (int i = 0; i < size; i++) {
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

		for (int j = 0; j < size; j++) {

			if (ceil(table[i][j]) >= 101.000000) {
				printf("| %.3lf", table[i][j]);
			}
			else if (table[i][j] >= 9.999999) {
				printf("|  %.3lf", table[i][j]);
			}
			else {
				printf("|   %.3lf", table[i][j]);
			}

		}
		printf("\n");
	}
	printf("\n");
}


int main(void) {
	FILE *fptr, *fin, *tripIn;
	char fileName[100], reFileName[100];
	double x[21], y[21]; //array for putting x and y coordinates in .tab file
	double sumOfRoute = 0, sumX = 0, sumY = 0;
	int N;

	printf("Input filename: ");
	gets(fileName);

	fptr = fopen(fileName, "r");


	if (fptr == NULL) {
		printf("Cannot open input file %s\n", fileName);
		getchar();
		exit(1);
	}

	strcpy(reFileName, fileName);
	fin = fopen(strcat(fileName, ".bak.csv"), "w");

	if (fin == NULL) {
		printf("Cannot open output file %s\n", fileName);
		getchar();
		exit(1);
	}
	fscanf(fptr, "%d", &N);

	fprintf(fin, "%d interest points\n", N);

	for (int i = 0; i < N; i++) {
		fscanf(fptr, "%lf %lf", &x[i], &y[i]);
		fprintf(fin, "%d,%.6lf,%.6lf\n", i + 1, x[i], y[i]);
	}

	fclose(fptr);
	fclose(fin);

	//task B
	double value[20][20];

	//calculate all the value first
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (i == j) {
				value[i][j] = 0.000;
			}
			else {
				value[i][j] = sqrt(pow((x[i] - x[j]), 2) + pow((y[i] - y[j]), 2));
			}
		}
	}

	genTable(x, y, N);

	//find the length of path
	for (int i = 0; i < N; i++) {
		if (i == N - 1)
			sumOfRoute = sumOfRoute + value[i][0];
		else
			sumOfRoute = sumOfRoute + value[i][i + 1];
	}

	//printf("%lf\n", sumOfRoute);

	tripIn = fopen(strcat(reFileName, ".trip.csv"), "w");

	if (tripIn == NULL) {
		printf("Cannot open output file %s\n", reFileName);
		getchar();
		exit(1);
	}

	for (int i = 0; i < N; i++) {
		fprintf(tripIn, "%d\n", i + 1);
	}
	fprintf(tripIn, "%d\n", 1);

	fclose(tripIn);

	//task C

	//1, Find the center of the points (x1+x2+x3+.....+xn)/n , (y1+y2+y3+.....yn)/n
	//2, Find the longest distance between center and point
	//3, Use that distance as the radius

	//add all the x- and y- coordinate
	for (int i = 0; i < N; i++) {
		sumX = sumX + x[i];
		sumY = sumY + y[i];
	}

	double longestDis = 0, centerY = sumY / N, centerX = sumX / N;

	//check which is the longest
	for (int j = 0; j < N; j++) {
		if (sqrt(pow((x[j] - centerX), 2) + pow((y[j] - centerY), 2)) > longestDis) {
			longestDis = sqrt(pow((x[j] - centerX), 2) + pow((y[j] - centerY), 2));
		}
	}

	printf("*** Centre (%.6lf, %.6lf) with radius %.6lf\n", centerX, centerY, longestDis);

	//Also put the center of the circle inside the array, for function to generate a table
	x[N] = centerX;
	y[N] = centerY;

	genTable(x, y, N + 1);

	getchar();
	return 0;
}
