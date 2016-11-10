/**
 * ENGG1110 Problem Solving by Programming
 *
 * Lab 4 Exercise 4 <fill in yourself>
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
 * Class/Section:  BL01 <fill in yourself>
 * Date         : 27/9/2016 <fill in yourself>
 */

 #include <stdio.h>
 int main(void){
    int inputN, inputX;

        //get the n
        do{
            printf("What's n:\n");
            scanf("%d", &inputN);

            if(inputN > 0)
            break;
        }while(1);

        //get the x
        do{
            printf("Input x:\n");
            scanf("%d", &inputX);

            if(inputX <= inputN && inputX > 0)
            break;
        }while(1);

        //make the string
        for(int i = 1; i<inputN+1; i++){
            if(i == inputX){
                printf("%d", i);
                for(int j = 0; j < inputX; j++)
                    printf(".");
                printf("%d ", i);
            }else{
                printf("%d ", i);
            }
        }



     return 0;
 }
