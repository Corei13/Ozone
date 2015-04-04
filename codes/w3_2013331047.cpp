/*
ID:fb/tuhinto1
PROG:friday
LANG: C++
*/
#include<bits/stdc++.h>
using namespace std;

bool leapyear(int year);
int main()
{
    freopen("friday.in","r",stdin);
    freopen("friday.out","w",stdout);
    int date,bar,year,i,j,month,n;
    while(scanf("%d",&year)==1)
    {
        int week[7]={0};
            n=0;
        bar=1;
        date=0;
        month=1;
        while(n<year)
        {
            date++;bar++;
            if(bar==7) bar=0;
            if(date==13)
                week[bar]++;

            if(date>=28)
            {
                if((month==1||month==3||month==5||month==7 ||month==8||month==10) && date==31)
                {
                    month++;
                    date=0;
                }
                else if((month==4||month==6 || month ==9 ||month==11) && date==30)
                {
                    month++;
                    date=0;
                }
                else if(month==12 && date==31)
                {
                    month=1;
                    date=0;
                    n++;
                }
                else if(leapyear(1900+n)&& month==2 && date ==29)
                {
                    //cout<<1900+n<<endl;
                    month++;
                    date=0;
                }
                else if(!leapyear(1900+n)&& month==2 && date==28 )
                {
                    month++;
                    date=0;
                }
                //else cout<<date<<"\\"<<month<<"--";
            }


        }

       for(i=0;i<6;i++)
        printf("%d ",week[i]);
        cout<<week[6]<<endl;

    }

    return 0;
}
bool leapyear(int year)
{
    if(year%400==0) return true;
    else if (year%100== 0) return false;
    else if(year%4== 0) return true;
    else return false;
}
