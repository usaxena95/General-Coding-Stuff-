#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
 
#define MOD 1000000009
#define INF 100000000
 
#define ULL unsigned long long int
#define LL long long int
 
#define Max(a, b) ((a>b)?a:b)
#define Min(a, b) ((a>b)?b:a)
#define Abs(a) ((a>0)?a:-a)
 
#define Repeat(i,j,n,k) for((i)=(j);(i)<(n);(i)+=(k))
#define IRepeat(i,j,n,k) for((i)=(j);(i)>=(n);(i)-=(k))
#define Rep(i,n) Repeat(i,0,n,1)
#define IRep(i,n) IRepeat(i,n,0,1)
 
#define MAXN 1001
int en[MAXN], ex[MAXN];
int main() {
    int T; scanf("%d", &T);
    while(T--) {
        int i, x, n, p = 0, res = 0; scanf("%d", &n);
        Rep(i, MAXN) en[i] = ex[i] = 0;
        Rep(i, n) { scanf("%d", &x); en[x]++; }
        Rep(i, n) { scanf("%d", &x); ex[x]++; }
        Rep(i, MAXN) { p += en[i] - ex[i]; res = Max(res, p); }
        printf("%d\n", res);
    }
    return 0;
}
 
