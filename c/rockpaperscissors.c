#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int input;
    printf("Enter ur move : ");
    scanf("%d",&input);
     srand(time(0));  // random setup
     int comp = rand()%3 + 1;   // comp move
    switch (input)
    {
    case 1:
       printf("Ur move is rock\n");
        break;
    case 2:
       printf("Ur move is paper\n");
        break;
        case 3:
       printf("Ur move is scissors\n");
        break;
    default:
    printf("invalid move");
        break;
    }
    switch(comp)
    {
        case 1:
            printf("Computer move is Rock\n");
            break;

        case 2:
            printf("Computer move is Paper\n");
            break;

        case 3:
            printf("Computer move is Scissors\n");
            break;
    }
    if (input==1)
    {
        if (comp==2)
        {
            printf("comp win\n");
        }
        else if (comp==3)
        {
           printf("user win");
        }
        else{
            printf("no win");
        }
    }
    if (input==2)
    {
        if (comp==3)
        {
            printf("comp win\n");
        }
        else if (comp==1)
        {
           printf("user win");
        }
        else{
            printf("no win");
        }
    }
    if (input==3)
    {
        if (comp==2)
        {
            printf("comp win\n");
        }
        else if (comp==1)
        {
           printf("user win");
        }
        else{
            printf("no win");
        }
    }
    return 0;
}