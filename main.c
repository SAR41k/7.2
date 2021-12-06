#include <stdio.h>
#include <stdlib.h>
int main()    
{
const unsigned char ROWS = 10;
const unsigned char COLS = 10;
const int LEFT_BORDER=-100;
const int RIGHT_BORDER=100;
double averageSlaveDiag=0;
int m[ROWS][COLS];
int SumSlaveDiag = 0;
for (int row=0; row<ROWS; row++) 
{
for (int col=0; col<COLS ; col++)
{
m[row] [col]=rand()%(RIGHT_BORDER - LEFT_BORDER+1)+LEFT_BORDER;
printf("%5d", m[row] [col]);
}
printf("\n");
}
for (int i=0; i<ROWS; i++) 
{
printf("col-%d, row-%d\n",i,ROWS-i-1);
printf("m-%d",m[i][ROWS-1-i]);
SumSlaveDiag+=m[ROWS-i-1][i];
}
averageSlaveDiag=(double)SumSlaveDiag/COLS;
printf("Sum slave diagonal of matrix: %d",SumSlaveDiag);
printf("Avarage slave diagonal of matrix: %6.2lf",averageSlaveDiag);
return 0;
} 
