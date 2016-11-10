/**
 * ENGG1110 Problem Solving by Programming
 *
 * Lab 10 Exercise 2 <fill in yourself>
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
 * Student Name : Kwong Lap Ting,Jason <fill in yourself>
 * Student ID   : 11550831019 <fill in yourself>
 * Class/Section: ENGG1110 BL01 <fill in yourself>
 * Date         : 8/11/2016 <fill in yourself>
 */
 #include<stdio.h>
 #include<string.h>

 int main(void){
   int isPalindrome = 1;
   int j = 0;
   char str[100];
   scanf("%s", str);
   char invertedStr[100];


   for(int i = 0; i < strlen(str); i++){
     if(str[i] != str[strlen(str)-i-1]  && (str[i] != str[strlen(str)-i-1]+32 && str[i]+32 != str[strlen(str)-i-1])){
      isPalindrome = 0;
      break;
    }
   }

   if(isPalindrome)
    printf("Palindrome\n");
   else
    printf("Not palindrome\n");

   return 0;
 }
