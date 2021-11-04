#include <stdio.h>
#include <math.h>

int main () {
  
int A, B, C;
float D;

printf("give a value to A B and C");
scanf("%d %d %d", &A,&B,&C);

D = B*B - 4*A*C;

if (A == 0)
{
    printf("this equation concede one solution : X = %.2f \n", (float) - C / B);
}

else if ( D > 0 )
{
    printf("this equation concede two solutions : X1 = %.2f \n", (float)(-B+sqrt(D))/(2*A));  
    printf("X2 = %.2f \n", (- B - sqrt(D))/(2 * A));
}
else if ( D == 0 )
{
    printf("this equation concede one solution : X = %.2f \n", (float)-B/2*A);
} 
else 
{
    printf("this equation concede two complex solutions : X1 = %.2f + i%.2f \n", (float)(-B), (float)(sqrt(-D)/(2*A))); 
    printf("X2 = %.2f + i%.2f \n",(float)(-B), (float)(-sqrt(-D)/(2*A)));
}

scanf("\n"); 
return 0;  
}
