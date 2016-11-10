/**
 * ENGG1110 Problem Solving by Programming
 *
 * Lab 8 Exercise 1 <fill in yourself>
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

int odd(int x)
{
  if(x%2){
    //odd
    return 1;
  }else{
    //even
    return 0;
  }
}

int main(void)
{
    int input;
    int result = 1;

  do{
    scanf("%d", &input);
    result = odd(input);

    if(result){
      printf("%d is odd.", input);
      break;
    }else{

      printf("%d is even.\n", input);

    }

  }while(1);

    return 0;
}
