#include <stdio.h>
#include <math.h>
#include<cmath>
 main(){ 
    unsigned long long   a ;
	unsigned long long   temp, m, x2,x1, hasil;
    while (scanf("%lld", &a)!=EOF)
	{
        temp=floor((unsigned long long ) a/( unsigned long long  ) 9);
         m= (unsigned long long ) a/(unsigned long long  ) 9;
         x2= (unsigned long long ) temp- (unsigned long long ) m;
		x1=	((unsigned long long )x2*(unsigned long long   )x2);
         hasil=((unsigned long long )temp+(unsigned long long )x1);
		hasil=( unsigned long long )81*hasil;
        printf("%lld\n", hasil);
    }
    return 0;
}
