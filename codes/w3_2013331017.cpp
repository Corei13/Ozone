/*
ID: arnab.a1
LANG: C++
TASK: friday
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
    freopen("friday.in","r",stdin);
    freopen("friday.out","w",stdout);

    int n,i,j,y,d,w,l;
    while(scanf("%d",&n)==1){
        w=1;
        int cnt[10];
        for(i=0;i<10;i++) cnt[i]=0;
        for(y=1900;y<1900+n;y++){
            //month=january;
            for(d=1;d<=31;d++){
                w++;
                w=w%7;
                if(d==13) cnt[w]++;
            }
            //month=february;
            l=28;
            if((y%4==0 && y%100!=0)||y%400==0) l=29;
            for(d=1;d<=l;d++){
                w++;
                w=w%7;
                if(d==13) cnt[w]++;
            }
            //month=march;
            for(d=1;d<=31;d++){
                w++;
                w=w%7;
                if(d==13) cnt[w]++;
            }
            //month=april;
            for(d=1;d<=30;d++){
                w++;
                w=w%7;
                if(d==13) cnt[w]++;
            }
            //month=may;
            for(d=1;d<=31;d++){
                w++;
                w=w%7;
                if(d==13) cnt[w]++;
            }
            //month=june;
            for(d=1;d<=30;d++){
                w++;
                w=w%7;
                if(d==13) cnt[w]++;
            }
            //month=july;
            for(d=1;d<=31;d++){
                w++;
                w=w%7;
                if(d==13) cnt[w]++;
            }
            //month=august;
            for(d=1;d<=31;d++){
                w++;
                w=w%7;
                if(d==13) cnt[w]++;
            }
            //month=september;
            for(d=1;d<=30;d++){
                w++;
                w=w%7;
                if(d==13) cnt[w]++;
            }
            //month=october;
            for(d=1;d<=31;d++){
                w++;
                w=w%7;
                if(d==13) cnt[w]++;
            }
            //month=november;
            for(d=1;d<=30;d++){
                w++;
                w=w%7;
                if(d==13) cnt[w]++;
            }
            //month=december;
            for(d=1;d<=31;d++){
                w++;
                w=w%7;
                if(d==13) cnt[w]++;
            }
        }
        for(i=0;i<6;i++) printf("%d ",cnt[i]);
        printf("%d\n",cnt[6]);
    }
	return 0;
}

