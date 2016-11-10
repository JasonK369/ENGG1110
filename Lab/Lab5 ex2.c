/**
 * ENGG1110 Problem Solving by Programming
 *
 * Lab 5 Exercise 2 <fill in yourself>
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
 #include <math.h>
int main(void){
int input;
double sum = 0;
printf("Number of terms:\n");
scanf("%d", &input);
for(int i = 0; i < input; i++){
  sum = sum + (pow(-1.0, i)/((2*i)+1));
}
printf("%.10lf\n", sum*4.0);

return 0;
}
