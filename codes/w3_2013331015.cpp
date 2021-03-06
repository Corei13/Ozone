/*
ID: mridul11
PROG: friday
LANG: C++
*/

#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
using namespace std;

int main()
{
    freopen("friday.in", "r", stdin);
    freopen("friday.out", "w", stdout);
    int N;
    while(cin>>N)
    {
        int day[7]= {0}, month[12], i, j, k, l, p=1;
        for(i=1900; i<1900+N; i++)
        {
            for(j=1; j<=12; j++)
            {
                if(j==1 || j==3 || j==5 || j==7 || j==8 || j==10 || j==12)
                {
                    for(k=1; k<=31; k++)
                    {
                        p++;
                        p=p%7;
                        if(k==13) day[p]++;
                    }
                }
                else if(j==4 || j==6 || j==9 || j==11)
                {
                    for(k=1; k<=30; k++)
                    {
                        p++;
                        p=p%7;
                        if(k==13) day[p]++;
                    }
                }
                else if(j==2)
                {
                    if(i%400==0 || (i%100!=0 && i%4==0))
                    {
                        for(k=1; k<=29; k++)
                        {
                            p++;
                            p=p%7;
                            if(k==13) day[p]++;
                        }
                    }
                    else
                    {
                        for(k=1; k<=28; k++)
                        {
                            p++;
                            p=p%7;
                            if(k==13) day[p]++;
                        }
                    }
                }
            }
        }
        for(l=0; l<6; l++) printf("%d ", day[l]);
        printf("%d\n", day[6]);
    }

    return 0;
}
