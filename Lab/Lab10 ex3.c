/**
 * ENGG1110 Problem Solving by Programming
 *
 * Lab 10 Exercise 3 <fill in yourself>
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
   int onlyLow = 1, onlyUp = 1, noDigit = 1, noSpec = 1, tooShort = 1, counter = 0;
   char str[100];
   scanf("%s", str);
   int len = strlen(str);
// fgets(str, 100, stdin);
// printf("%s\n", str);

   for(int i = 0; i < 6; i++){
counter = 0;
     if(i == 0){ //check lower case only
       for(int j = 0; j < len; j++){
        if(!(str[j] <= 90 && str[j] >=65))
            counter++;
       }
       if(counter == len){
          printf("No uppercase letter\n");
          break;
       }
     }

     if(i == 1){ //check upper case only
       for(int j = 0; j < len; j++){
         if(!(str[j] <= 122 && str[j] >=97)){
           counter++;
         }
       }
       if(counter == len){
          printf("No lowercase letter\n");
          break;
       }
     }

     if(i == 2){ //check no digit
       for(int j = 0; j < len; j++){
         if(str[j] <= 57 && str[j] >=48){
           noDigit = 0;
         }
       }
       if(noDigit){
          printf("No digit\n");
          break;
       }
     }

     if(i == 3){ //check special character
       for(int j = 0; j < len; j++){
         if((str[j] >= 123 && str[j] <= 126) || (str[j] >= 33 && str[j] <= 47) || (str[j] >= 58 && str[j] <= 64) || (str[j] >= 91 && str[j] <= 96)){
           counter++;
         }
       }
       if(counter == 0){
          printf("No special character\n");
          break;
       }
     }

     if(i == 4){
       if(len <= 11){
       printf("Too short\n");
       break;
      }
     }
//printf("%d\n", i);
     if(i == 5){
       printf("Strong password\n");
     }
   }

   return 0;
 }
