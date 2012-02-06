#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
using namespace std;

 double findvol(double,double,double,double,double,double);
 double surface( double, double, double);
int main()
{
	int t;
	scanf("%d",&t);
	while (t)
	{
		double u,v,w,a,b,c;
		scanf("%lf %lf %lf %lf %lf %lf",&u,&v,&w,&c,&b,&a);
		double ans=findvol(u,v,w,c,b,a);
		double sufare=surface(u,c,v)+surface(v,w,a)+surface(u,w,b)+surface(a,b,c);
	//	printf("%lf\n",sufare);
		printf("%.4lf\n",((3 *ans/sufare)));
		t--;
	}
	return 0;
}

double surface( double a, double b,  double c)
{
	 double s=(a+b+c)/2;
	//printf("%f\n",s);
	 double r= (sqrt(s*(s-a)*(s-b)*(s-c)));
	//printf("%lf\n",r);
	return r;
}
 double findvol(double u,double v,double w,double c, double b,double a)
{
	double t1= u*u+v*v-c*c;
	//printf("%f",t1);
	double t2= v*v+w*w-a*a;
	double t3= w*w+u*u-b*b;
	//double f= (4*u*u*v*v*w*w-u*u*t2*t2-v*v*t3*t3-w*w*t1*t1+t1*t2*t3);
	double vol=4*u*u*v*v*w*w;
	vol-=u * u * pow(t2,2);
	vol-=v * v * pow(t3,2);
	vol-=w * w * pow(t1,2);
	vol+=t1 * t2 * t3;
	vol=sqrt(vol);
	vol/=12;
//	printf("%lf\n",vol);
	return vol;
}
