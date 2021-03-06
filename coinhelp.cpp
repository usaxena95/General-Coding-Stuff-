#include <iostream>

long long MaxVal(long long n, long long p, long long q);

//Define memoization array
const int maxp = 28;
const int maxq = 18;
long long maxVals[maxp*maxq];


int main(){

	while(true){

		long long n;

		//Get the input
		std::cin >> n;

		if(std::cin.eof()){break;}

		//Initialize the memoization array to negative values
		for(int p=0;p<maxp;p++){
			for(int q=0;q<maxq;q++){
				  maxVals[q + p*maxq] = -1;
			}
		}

		//Output the result
		std::cout << MaxVal(n,0,0) << std::endl;
	} 

	
	return 0;
}

long long MaxVal(long long n, long long p, long long q){
//Recursive algorithm to compute maximum American dollars
//from n Bytelandian dollars

	if(n<12)
	{	return n;
	} 
	else if(maxVals[q + p*maxq]>=0)
	{	
		//Don't waste time. Use the values that have already been computed
		return maxVals[q + p*maxq];  
	} 
	else
	{	long long a = n/2;
		long long b = n/3;
		long long c = n/4;

		long long bestAmt = MaxVal(a, p+1, q) 
			              + MaxVal(b, p, q+1) 
				   	      + MaxVal(c, p+2, q);

		//Store this value so it need not be recomputed
		maxVals[q + p*maxq] = bestAmt; 

		return bestAmt;
	}
}
