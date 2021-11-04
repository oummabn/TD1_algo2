#include<stdio.h>



int main()
{

int a, b, r;
printf("give a value to a and b");
scanf("%d %d", &a,&b);
  
  while (b != 0) {
    r = b;
    b = a % b;
    a = r;
  }

 printf("the gcd is %d",a);

return 0;
}