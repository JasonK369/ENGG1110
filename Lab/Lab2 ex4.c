/**
 * ENGG1110 Problem Solving by Programming
 *
 * Lab 2 Exercise 4 <fill in yourself>
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
#include<math.h>

/* starting point of this C program */
int main(void)
{
    // Enter your code here.
    int water, capacity;
    double result = 0;
    printf("Total amount of water: \n");
    scanf("%d", &water);
    printf("Barrel capacity: \n");
    scanf("%d", &capacity);
    result = (double)water/(double)capacity;
    printf("%d barrels are needed", (int)ceil(result));

    /* last statement of this C program */
    return 0;
}
