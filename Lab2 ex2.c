/**
 * ENGG1110 Problem Solving by Programming
 *
 * Lab 2 Exercise 2 <fill in yourself>
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
    int a, b, c, d, e, f; //var for the input
    //int w1, w2, w3, w4, w5, w6; //var for the weight
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    int remainder = ( 25*8 + a*7 + b*6 + c*5 + d*4 + e*3 + f*2)%11;

    int checkCode = 11 - remainder;

    printf("%d", checkCode);


    /* last statement of this C program */
    return 0;
}
