/*
ID: gautam.4
LANG: C
PROG: friday
*/
#include <stdio.h>
#include <string.h>

int main()
{
    freopen("friday.in","r",stdin);
    freopen("friday.out","w",stdout);
    int n;
    scanf("%d",&n);
    int ans[7];
    int days[]={31,28,31,30,31,30,31,31,30,31,30,31};
    memset(ans,0,sizeof ans);
    int i,j,y,d,in,k;
    for(y=1900,d=-1,in=2;y<=1900+(n-1);y++)
    {
        if((y%4==0&&y%100!=0)||y%400==0)
            days[1]=29;
        else
            days[1]=28;
        for(j=0;j<12;j++)
        {
            k=d+13;
            in=(k%7)+in;
            if(in>6)
                in=in%7;
            ans[in]++;
            d = days[j]-13;
        }
    }
    printf("%d",ans[0]);
    for(i=1;i<7;i++)
        printf(" %d",ans[i]);
    printf("\n");
    return 0;
}


