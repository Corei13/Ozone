/*
ID: buddhob3
LANG: C
PROG: ride
*/

#include <stdio.h>
#include <string.h>
int main()
{
    freopen("ride.in","r",stdin);
    freopen("ride.out","w",stdout);
    long long int i,sum1,sum2,l1,l2,m1,m2;
    char s1[10],s2[10];
    while(scanf("%s%s",s1,s2) == 2){
    sum1=1;
    sum2=1;
    l1=strlen(s1);
    l2=strlen(s2);
    for(i=0; i<l1 ; i++)
        sum1 *= (s1[i]-64);

    for(i=0; i<l2 ; i++)
        sum2 *= (s2[i]-64);

    m1=sum1%47;
    m2=sum2%47;
    if(m1==m2)
        printf("GO\n");
    else
        printf("STAY\n");
    }
    return 0;
}
