#include<stdio.h>
#include<math.h>
int main()
{
    long long int  n;
	long long int  i;
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
                                  
                                                                  b=(long long int)(81*(floor(n/9)+( long  long  int)(mod((long   long int )n/(long long int )9,&i)* (( long  long int  )n/( long long int  )9,&i))%1));
																						  
																						  
																	 
																									
																								
																									
																									
																									
																									
																												
																												 
																												 
																												
																													 
																													 
																													 
                                  printf("%lld\n",b);
                              }
    }
    return 0;
}
