/**
 * ENGG1110 Problem Solving by Programming
 *
 * Lab 6 Exercise 2 <fill in yourself>
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
 * Date         : 12/10/2016 <fill in yourself>
 */

#include <stdio.h>
int main(void){
int input[10];
int sum = 0, d, t, j = 0;
printf("Input 10 integers:\n");
//get user input
while (scanf("%d", &input[j++]) && j < 10);

//sorting
for (int c = 1 ; c < 10; c++) {
    d = c;

    while ( d > 0 && input[d] < input[d-1]) {
      t          = input[d];
      input[d]   = input[d-1];
      input[d-1] = t;

      d--;
    }
  }

  for(int i = 9; i >= 0; i--){
      sum = sum + input[i];
    if(i == 0)
      printf("%d",input[i]);
    else
      printf("%d,", input[i]);
  }

printf("\nMean = %.1lf\n", sum/10.0);
printf("Median = %.1lf", (input[4]+input[5])/2.0 );

  return 0;
}
