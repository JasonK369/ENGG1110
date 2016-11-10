/**
 * ENGG1110 Problem Solving by Programming
 *
 * Lab 3 Exercise 2 <fill in yourself>
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
 * Date         : 20/9/2016 <fill in yourself>
 */

 #include <stdio.h>

 int main(void){
     int mk;
     printf("Mark:");
     scanf("%d", &mk);

     if(mk > 100 || mk < 0)
        printf("Error:Invalid Mark!");
    else{
        if(mk >= 80)
        printf("Grade:A");
        else if(mk >= 60 && mk <= 79)
            printf("Grade:B");
            else if(mk >= 40 && mk <= 59)
            printf("Grade:C");
            else if(mk >= 20 && mk <= 39)
            printf("Grade:D");
            else if(mk <= 19)
            printf("Grade:F");

    }

     return 0;
 }
