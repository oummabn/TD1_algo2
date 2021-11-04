#include <stdio.h>


int main () {

int N; 
int I;
float SUM;

printf("terms number : ");
scanf("%d", &N);

for (I = 1; I<=N; I++)

SUM += (float)1/I;

printf("the sum of the %d first terms is %f \n",N,SUM);

return 0;

}