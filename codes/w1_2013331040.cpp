/*
ID: kazisow1
PROG: ride
LANG: C++
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<algorithm>
#include<math.h>
int main ()
{
    freopen("ride.in","r",stdin);
    freopen("ride.out","w",stdout);
    int i,j,l1,l2,c1=1,c2=1;
    char a[10],b[10];
    gets(a);
    gets(b);
    l1=strlen(a);
    for(i=0;i<l1;i++)
    {
        if(a[i]>='A' && a[i]<='Z')
            c1*=(a[i]-'A'+1);
        c1%=47;
    }
    l2=strlen(b);
    for(j=0;j<l2;j++)
    {
        if(b[j]>='A' && b[j]<='Z')
            c2*=(b[j]-'A'+1);
        c2%=47;
    }
    if(c1==c2)
        printf("GO\n");
    else
        printf("STAY\n");
    return 0;
}
