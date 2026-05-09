#include<stdio.h>
int main(){
    int ar[3][3];
    printf("Enter no :");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j< 3; j++)
        {
            scanf("%d",&ar[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j< 3; j++)
        {
            printf("%d ",ar[i][j]);
        }
         printf("\n");
    }
    for (int  i = 0; i < 3; i++)
    {
        if(ar[i][0] == ar[i][1] &&
       ar[i][1] == ar[i][2])
    {
        printf("Row win\n");
    }   
    }
    for(int j = 0; j < 3; j++)
{
    if(ar[0][j] == ar[1][j] &&
       ar[1][j] == ar[2][j])
    {
        printf("Column win\n");
    }
}
if (ar[0][0]==ar[1][1]&& ar[1][1]==ar[2][2])
{
    printf("Diagonal win\n");
}

else{
    printf("invalid");
}
    return 0;
}