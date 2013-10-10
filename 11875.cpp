#include<stdio.h>
#include<stdlib.h>
#include<algorithm>

using namespace std;

int main()
{
    int a[11],i,j,n,t,m;
    scanf("%d",&t);
    i=0;
    while(i<t)
    {
        scanf("%d",&n);
        j=0;
        while(j<n)
        {
            scanf("%d",&a[j]);
            j++;
        }
        sort(a,a+n);
        m = (n/2);
        printf("Case %d: %d\n",i+1,a[m]);
        i++;
    }
    return 0;
}
