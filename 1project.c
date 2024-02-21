#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main ()
{ int number, guess, nguesses =1;
srand(time (0));
number = rand()%100+1;
do { printf( "enter your number \n" );
    scanf(" %d", & guess );
    if (number > guess){ printf("higher number plzz \n");}
    else if(number<guess){printf("lower number plzz \n");}
    else{printf(" you guessed it right on %d attempts", nguesses);}
    nguesses++;}while (number!= guess);
    return 0;


}  
