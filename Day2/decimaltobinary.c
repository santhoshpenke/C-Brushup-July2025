#include<stdio.h>
#include<math.h>
int main()
{
    int a,rem,i=0,dec=0;
    printf("Enter a number: ");
    scanf("%d", &a);
    while(a>0)
    {
     rem=a%10;
     a=a/10;
     dec=dec+rem*pow(2,i);
     i++;
    }  
     printf("%d", dec);
       return 0;
}