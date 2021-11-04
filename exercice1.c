#include <stdio.h> 

int main() {

int n = 5 , p = 9;
int q;
float x;

/*1*/
q = n < p;
printf ("q = %d \n",q);

/*2*/ 
q = n == p;
printf("q = %d \n",q);

/*3*/
q = p % n + p > n;
printf ("q = %d \n",q);

/*4*/
x = p / n;
printf ("x = %d \n",x);

/*5*/
x = p/n;
printf("x = %f \n",x);

/*6*/ 
x = (p + 0.5)/ n;
printf ("x = %d \n",x);

/*7*/
x = (p + 0.5 )/ n;
printf ("x = %d \n",x);

/*8*/
q = n * (p > n ? n : p);
printf("q = %d \n",q);

/*9*/
q = n * (p < n ? n : p);
printf("q = %d \n",q);

return 0;

}