/*
ID: arnab.a1
LANG: C++
TASK: ride
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
    freopen("ride.in","r",stdin);
    freopen("ride.out","w",stdout);
    char comet[10],group[10];
    int i,l,a,b;
    while(scanf("%s%s",comet,group)==2){
        l=strlen(comet);
        a=b=1;
        for(i=0;i<l;i++){
            a=(a%47)*(comet[i]-'A'+1);
        }
        a=a%47;
        l=strlen(group);
        for(i=0;i<l;i++){
            b=(b%47)*(group[i]-'A'+1);
        }
        b=b%47;
        if(a==b) printf("GO\n");
        else printf("STAY\n");
    }
	return 0;
}
