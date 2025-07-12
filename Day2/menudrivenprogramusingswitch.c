#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int decimaltobinary(int n);
int binarytodecimal(int n);
int main()
{   int n,c;
    printf("enter number");
    scanf("%d",&n);
    printf("enter choice 1:deciaml to binary \n 2:binary to decimal \n 3:exit");
    scanf("%d",&c);
    switch(c)
    {
        case 1 :
        decimaltobinary(n); 
        break;
        case 2 :
        binarytodecimal(n); 
        break;
        case 3:
            exit(0);
            break;
        default :
        printf("wrong option");  
        break;
    }
    return 0;
}
int decimaltobinary(int n)
{
    int r[10],i=0;
    while(n>0)
    {
        r[i]=n%2;
        i++;
        n=n/2;
    }
    for(int j=i-1;j>=0;j--)
    {
        printf("%d",r[j]);
    }
}
int binarytodecimal(int n)
{   int rem,i=0,dec=0;
    while(n>0)
    {
    rem=n%10;
    n=n/10;
    dec=dec+rem*pow(2,i);
    i++;
    }
    printf("%d",dec);
}