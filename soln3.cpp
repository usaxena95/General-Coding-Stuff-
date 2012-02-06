#include<stdio.h>
int main()
{
		long long int n,cas,a[1111],i,j;
			long long int sum=0;
				a[0]=0;
					a[1]=1;
						a[2]=1;
							a[3]=2;
								a[4]=5;
									for(i=5;i<=1000;i++)
											{
														sum=0;
																for(j=1;2*j<i;j++)
																			{
																							sum=sum+2*a[j]*a[i-j];
																									}
																		if(sum>=10000)
																						sum=sum%10000;
																				if(i%2==0)
																								sum=sum+a[i/2]*a[i/2];
																						a[i]=sum%10000;
																							}
										scanf("%lld",&cas);
											while(cas--)
													{
																scanf("%lld",&n);
																		printf("%lld\n",a[n]);
																			}
												return 0;
} 

