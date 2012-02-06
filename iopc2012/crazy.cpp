#include<stdio.h>
#include<string.h>

main()
{
   int T;
   char seq[100000],c;
   int i =0,len,ans=1;
   int last,num,present,occur;
   
   scanf("%d",&T);
   //printf("%d",T);
   while(T>0)
   {
      last = 0;
      num=0;
      ans = 1;
      scanf("%s",&seq);
      len = strlen(seq);
      for (i=0;i<len;i++)
      {
    c = seq[i];
    num = seq[i] - 'a' ;
    present = num/3 + 2;
    occur = (num%3) +1;
    if (present > 6)
    {
      if(num<19)
      {  present = 7;
         occur = num - 14;
      }
      else if (num < 22)
      {
        present = 8;
        occur = num - 18;
      }
      else if (num< 26)
      {
        present = 9;
        occur = num -21;
      }
    }
    while(occur>1)
    {
      ans =(ans*2) % 100000007;
      occur--;
    }
    if (last == present)
      ans =(ans*2) % 100000007;
    last = present;
      }
      printf("%d\n",ans);
      T--;
   }
}

//End of the solution
