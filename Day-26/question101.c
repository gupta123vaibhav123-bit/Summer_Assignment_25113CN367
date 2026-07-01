#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int number,guess,chances=0;

    srand(time(0));
    number=rand()%100+1;

    printf("Guess a number between 1 and 100\n");

    while(1){
        printf("Enter your guess: ");
        scanf("%d",&guess);
        chances++;

        if(guess>number){
            printf("Too high! Try again.\n");
        }
        else if(guess<number){
            printf("Too low! Try again.\n");
        }
        else{
            printf("Correct! You guessed it in %d chances.\n",chances);
            break;
        }
    }

    return 0;
}