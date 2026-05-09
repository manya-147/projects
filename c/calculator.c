#include<stdio.h>
int main(){
    float a,b;
    int c;
    printf("Enter a : ");
    scanf("%f",&a);
    printf("Enter b : ");
    scanf("%f",&b);
    printf("Enter c : ");
    scanf("%d",&c);
    switch (c)
    {
    case 1 :
        printf("%f",a+b);
        break;
    case 2 :
        printf("%f",a-b);
        break;
    case 3 :
        printf("%f",a/b);
        break;
    case 4 :
        printf("%f",a*b);
        break;
    default:
        printf("Invalid");
        break;
    }
    return 0;
}