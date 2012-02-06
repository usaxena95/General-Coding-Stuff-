//Autor: Piotr Kakol

#include<stdio.h>
#include<math.h>

int main(void)
{
        double i, j, k, x;

        for(i=1;i<101;i++)
        {
                for(j=1;j<101;j++)
                {
                        for(k=1;k<101;k++)
                        {
                                x=cbrt(pow(i,3)+pow(j,3)+pow(k,3));
                                if(fmod(x,1)==0)
                                printf("Cube = %.0lf, Triple = (%.0lf, %.0lf, %.0lf)\n",x,i,j,k);
                        }
                }
        }
        return 0;
}
