/*
ID: gautam.4
LANG: C
PROG: ride
*/
#include <stdio.h>
#include <string.h>

int main()
{
    freopen("ride.in","r",stdin);
    freopen("ride.out","w",stdout);
    char s1[10];
    char s2[10];
    int l1,l2,n1,n2,i;
    while(scanf("%s",s1)==1)
    {
        scanf("%s",s2);
        l1=strlen(s1);
        l2=strlen(s2);
        for(i=0,n1=1;i<l1;i++)
            n1*=s1[i]-'A'+1;
        for(i=0,n2=1;i<l2;i++)
            n2*=s2[i]-'A'+1;
        n1=n1%47;
        n2=n2%47;
        if(n1==n2)
            printf("GO\n");
        else
            printf("STAY\n");
    }
    return 0;
}

