#include<stdio.h>
struct data
{ int a;
    float b;
    char c[20];
}s1;
int i;
int main()
{
    i=0;
  printf("enter name");
  while(1)
  {
     scanf("%c", &s1.c[i]);
    if(s1.c[i]=='\n')
    {
        s1.c[i]='\0';
    break;
    }
    i++;
   
  }  
  printf("enter roll no");
  scanf("%d",&s1.a);
  printf("enter cgpa");
  scanf("%f",&s1.b);
  printf("name is : ");
   i=0;
   while(s1.c[i]!='\0')
  
  {
    printf("%c",s1.c[i]);
    i++;
}
  printf("\n");
  printf("%d is roll \n ",s1.a);
  printf("%f is cgpa",s1.b);
    return 0;
}
