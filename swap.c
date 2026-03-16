#include <stdio.h>
int main()
{
int a=10,b=20,t;
printf("before swaping\na=%d,b=%d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("\nafter swaping\na=%d,b=%d",a,b);
return 0;
}
