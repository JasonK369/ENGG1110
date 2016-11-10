/**
 * ENGG1110 Problem Solving by Programming
 *
 * Lab 6 Exercise 1 <fill in yourself>
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

int size, r1, r2;


int i = 0, outpurCounter = 0;
int isEmpty = 1; //assume there are no number fulfill the condition

printf("Input n:\n");
scanf("%d", &size);
int input[size], output[size];

int k = 0;
for(k=0; k<size; k++)
  output[k] = -99999;

printf("Input %d integers:\n", size);
while (scanf("%d", &input[i++]) && i < size);


printf("Input r1 and r2:\n");
scanf("%d%d", &r1, &r2);

printf("Result: \n");
if(r1 > r2){

  for(i=0,k=0; i < size; i++){ //if r1 > r2
    if(input[i] <= r1 && input[i] >= r2){
    output[k] = input[i];
    k++;
    isEmpty = 0;
    }
  }

}else if(r1 == r2){

  for(i=0,k=0; i <= size; i++){ //if r1 EQUALS TO r2
    if(input[i] == r1){
      output[k] = input[i];
      k++;
      isEmpty = 0;
    }
  }

}else{

  for(i=0,k=0; i < size; i++){ //if r1 < r2
    if(input[i] >= r1 && input[i] <= r2){
      output[k] = input[i];
      k++;
      isEmpty = 0;
    }
  }
}

if(isEmpty) //output no number if there are no number fulfill the condition
  printf("No numbers\n");

  for(k = 0; k < size; k++)
  if(output[k] != -99999){
    if(output[k+1] != -99999 && k+1 != size)
      printf("%d,", output[k]);
    else
      printf("%d", output[k]);
  }


  return 0;
}
