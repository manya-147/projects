#include<stdio.h>
#include<string.h>
int main(){
    char name[5];
    printf("Enter name : ");
    scanf("%s",name);
   char input;
   int found =0,len=0;
   char display[5]={'_' , '_' , '_' , '_', '_'};
   while(1){
    printf("Enter char : ");
   scanf(" %c",&input);
   for (int i = 0; i < 5; i++)
   {
    if (input==name[i])
   {
   found =1;
   display[i]=input;
   len++;
   }
   
   } 
   if (found==1)
   {
   printf("CORRECT \n");
   }
   else
   {
    printf("WRONG\n");
   }
    found =0; 
    for (int i = 0; i < 5; i++)
   {
    printf("%c ",display[i]);
    
   }
      printf("\n");
      if (len==5)
    {
       break;
    }
}

   
    return 0;
}