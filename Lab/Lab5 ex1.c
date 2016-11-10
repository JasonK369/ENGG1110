/**
 * ENGG1110 Problem Solving by Programming
 *
 * Lab 5 Exercise 1 <fill in yourself>
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
 * Student Name : Kwong Lap Ting, Jason <fill in yourself>
 * Student ID   : 1155083019 <fill in yourself>
 * Class/Section: BL01 <fill in yourself>
 * Date         : 5/10/2016 <fill in yourself>
 */

#include <stdio.h>

int main(void){
    int input;
    printf("Size:\n");

    while(1){
    scanf("%d", &input);
    if(input > 0 && input <= 30){
        for(int i = 0; i <= input; i++){
            for(int j = 1; j <= i; j++){
                printf("%d", j);
                if(j == i)
                printf("\n");
            }
        }
        break;
      }else{
          printf("Error:Invalid Input!\n");
          printf("Size:\n");
      }
    }



    return 0;
}
