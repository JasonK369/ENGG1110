/**
 * ENGG1110 Problem Solving by Programming
 *
 * Lab 8 Exercise 3 <fill in yourself>
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
 * Date         : 25/10/2016 <fill in yourself>
 */
#include <stdio.h>
int max(int args[]){
  int max = args[0];
  for(int i = 0; i < 6; i++){
    if(args[i] > max){
      max = args[i];
    }
  }
  return max;
}

int min(int args[]){
  int min = args[0];
  for(int i = 0; i < 6; i++){
    if(args[i] < min){
      min = args[i];
    }
  }
  return min;
}

double average(int args[]){
  int sum = 0;
  for(int i = 0; i < 6; i++){
    sum = args[i] + sum;
  }
  return sum/6.0;
}


int main(void){
  int input[6], j =0;
  //get user input
  while(scanf("%d", &input[j++]) && j < 6);

  printf("Max=%d\n", max(input));
  printf("Min=%d\n", min(input));
  printf("Mean=%.2lf", average(input));
  return 0;
}
