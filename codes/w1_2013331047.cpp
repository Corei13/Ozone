
/*
ID:fb/tuhinto1
PROG: ride
LANG: C++
*/

#include<iostream>
#include<cstdio>
#include<list>
#include<string>
#include<cstring>
#include<sstream>
#include<cctype>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<stack>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<map>
#include<set>
#include<utility>
#include<iomanip>
#include<queue>
#include<deque>
#include<iterator>
#include<assert.h>
#include<bitset>
#include<climits>
#include<ctime>
#include<complex>

using namespace std;

#define SET(a) memset(a,-1,sizeof(a))
#define ALL(a) a.begin(),a.end()
#define CLR(a) memset(a,0,sizeof(a))
#define PB push_back
#define PI acos(-1.0)
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define READ freopen("input.txt", "r", stdin)
#define WRITE freopen("output.txt", "w", stdout)
#define LL long long

#define S(a) scanf("%d",&a)
#define S2(a,b) scanf("%d%d",&a,&b)
#define KS printf("Case %d: ",kk++)
#define pf printf

#define MOD 1000000007

int main()
{
    freopen("ride.in","r",stdin);
    freopen("ride.out","w",stdout);
    char ch[100],bh[100];
    while(scanf("%s%s",ch,bh)==2)
    {
        long long int a,b,len1,len2;
        len1=strlen(ch);
        len2=strlen(bh);
        a=b=1;
        for(int i=0; i<len1; i++)
        {
            a*=(ch[i]-'A'+1);
        }
        for(int i=0; i<len2; i++)
        {
            b*=(bh[i]-'A'+1);
        }
        if(a%47==b%47)
            pf("GO\n");
        else pf("STAY\n");

    }

    return 0;
}
