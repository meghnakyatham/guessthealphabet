#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main (){
    int guess, alphabets;
    int attempts = 0;
    
    srand(time(0));
    alphabets = 'A' + rand() % 26 ;

    printf("WELCOME TO THE GUESS THE ALPHABET GAME !! \n");
    printf("I HAVE CHOSEN AN ALPHABET BETWEEN A AND Z \n");

    while (1){
        printf("Enter your guess :");
        scanf("%c", &guess);
        guess = toupper(guess);
    
    attempts ++;
   if(guess == alphabets){
    printf("Congratulations ! You guessed it right, The alphabet is %c . \n", alphabets);
    printf("You made %d attempts. \n", attempts);
    break;
   }else if(guess < 'A' || guess > 'z'){
    printf("Invalid input. Please enter an uppercase alphabet('A' to 'Z'). \n");
   }else{
    printf("Try again. Your guess is %s the alphabet I have chosen. \n", guess < alphabets ?"before" : "after");
   }
    }
    return 0;
    }