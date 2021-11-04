#include<stdio.h>

int main() 
{

 long bin = 0, rst = 0, t =1;

 int dec;


 printf("type a decimal number :\n");
 scanf("%d",&dec); 


 while (dec != 0)
 {
     rst = dec % 2;
     bin = bin + rst * t;

 }
 
   
    return 0;
}