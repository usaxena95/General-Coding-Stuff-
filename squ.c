#include <stdio.h>
#include <math.h>
//#include <conio.h>
#include<cmath>
int main(){ 
    long double angka, baru, temp1, temp2, myD, x2, hasil;
    int i=0;
    while (scanf("%Lf", &angka)!=EOF)
{
      
        temp1=floor(angka/(long double) 9);
        myD= angka/(long double) 9;
        x2=temp1-myD;
        hasil=(long double)81*(temp1+(x2*x2));
        printf("%.0Lf\n", hasil);
    }
    
    getch();
    return 0;
}
