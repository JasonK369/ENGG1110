/**
 * ENGG1110 Problem Solving by Programming
 *
 * Lab 2 Exercise 3 <fill in yourself>
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
 * Student Name : Kwong Lap Ting <fill in yourself>
 * Student ID   : 1155083019 <fill in yourself>
 * Class/Section: BL01 <fill in yourself>
 * Date         : 14/9/2016 <fill in yourself>
 */

/* include header file */
#include <stdio.h>

/* starting point of this C program */
int main(void)
{
    // Enter your code here.
    int seconds;
    int days = 0 ;
    int hrs =0 ;

    double mins;
    scanf("%d", &seconds); //get the input

    while (seconds > 86400) {
		seconds = seconds - 86400;
		days++;
	}


	while (seconds > 3600) {
		seconds = seconds - 3600;
		hrs++;
	}

	mins = seconds / 60.0;

	printf("%d Days ", days);
	printf("%d Hours ", hrs);
	printf("%.2lf Minutes\n", mins);


    /* last statement of this C program */
    return 0;
}
