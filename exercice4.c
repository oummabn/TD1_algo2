#include <stdio.h>


int main () {

const int MAX = 10;

int I;
int J;


for (I=0 ; I<= MAX ; I++)
{
printf("%3d",I);
for (J = 0 ; J <= MAX ; J++)
printf("%3d", I*J);
printf("\n");
}
scanf("\n");
    return 0;
}