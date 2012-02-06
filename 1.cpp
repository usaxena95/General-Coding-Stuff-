#include <cstdio>
#include <cstring>

using namespace std;

char a[1000005];

int main()
{
	scanf(" %s", a);
	int len = strlen(a);
	long long ans = 0;
	int count = 0;
	for(int i = len - 1; i >= 0; i --)
	{
		int f = a[i] - '0';
		if(f % 8 == 0)
			ans ++;
		if(i < len - 1)
		{
			int s = a[i + 1] - '0';
			int num = 10 * f + s;
			if(num % 8 == 0 && num > 8)
				ans ++;
			if(i < len - 2)
			{
				int t = a[i + 2] - '0';
				int num = 100 * f + 10 * s + t;
				if(num % 8 == 0)
					count ++;
			}
		}
		if(a[i] != '0')
			ans += count;
		//printf("%d %lld %d", i, ans, count);
	}
	printf("%lld\n", ans);
	return 0;
}
