/**
 * ENGG1110 Problem Solving by Programming
 *
 * Lab 8 Exercise 2 <fill in yourself>
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


// this is the first function
int encrypt(int x)
{
int ciphertext = 0;

      if(x >= 7 && x <= 9){
        ciphertext = (int)((x + 3) % 10);
      }else{
        ciphertext = (int)(x + 3);
      }

    return ciphertext;

}



// this is the second function
int decrypt( int y )
{
int plaintext = 0;
//get the digit


    if(y >= 0 && y <= 2){
      plaintext =  (int) ((y+10) - 3);

    }else{
      plaintext =  (int) (y-3);
    }


return plaintext;

}



// this is the last function, main(), the program starting point
int main(void)
{
    // Enter your code here.
    // ALL normal printf() and scanf() statements shall happen in function main()
    // main() function calls encrypt(...) and textpt(...) to perform calculations
    int input, text[4], temp;


    while(1){
      scanf("%d", &input);

      //get the digit
      text[0] = input % 10;
      text[1] = input / 10 % 10;
      text[2] = input / 100 % 10;
      text[3] = input / 1000;

      if(input/1000 >= 1 && input / 1000 < 10){
        //encrypt
        printf("c: ");
        for(int i = 3; i >= 0; i--){
            temp = encrypt(text[i]);
            text[i] = temp;
            printf("%d", text[i]);
        }
        printf("\n");

        //decrypt
        printf("p: ");
        for(int j = 3; j >= 0; j--){
          temp = decrypt(text[j]);
          text[j] = temp;
          printf("%d", text[j]);
        }

        break;
      }else{
printf("Invalid Input.\n");
      }

    }



    return 0;
}
