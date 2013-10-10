#include<cstdio>
#include<stdlib.h>
int main()
{
    long long int A,L,count,cases=0;
    long long int a,b;
    bool found;
    while(scanf("%lld %lld",&a,&b)!=EOF)
    {
        if(a<0 && b<0) break;
        A=a;
        L=b;
        cases++;
        printf("Case %lld: A = %lld, limit = %lld",cases,A,L);
        count=1;
        found=false;
        while(!found)
        {
            if(A==1) found=true;
            else if(A%2==0)
            {
                A=A/2;
                count++;
            }
            else
            {
                A=3*A+1;
                if(A>L)
                {
                    found=true;
                    break;
                }
                count++;
            }
        }
        printf(", number of terms = %lld\n",count);
    }
    return 0;
}
