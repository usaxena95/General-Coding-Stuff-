#include<stdio.h>
#include<math.h>
int main()
{
    long long int  n;
	 double i;
    while(scanf("%lld",&n)!=EOF)
    {
                              long long int b;
                              if(n<=9)
                              {
                                      b=n*n;
                                      printf("%lld\n",b);
                              }
                              else
                              {
                                  
                                                                  b=(long long
																	 int)(81*(floor(n/9)+( long
																						   double																		)(modf((
																								long
																								double
																								)n/(
																									long
																									double
																									)9,&i)*modf((
																												 long
																												 double
																												 )n/(
																													 long double )9,&i))));
                                  printf("%lld\n",b);
                              }
    }
    return 0;
}
