/*
ID: kurisub1
PROG: beads
LANG: C++11
*/
#include<iostream>
#include<fstream>
#include<sstream>
#include<list>
#include<queue>
#include<deque>
#include<stack>
#include<vector>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<ctype.h>
#include<string>
#include<iterator>
#include<bitset>
#include<unordered_map>
#include<unordered_set>
#include<map>
#include<set>
#include<utility>
#include<memory.h>
#include<cstdlib>
#define PI 2*acos(0)
#define inf 0x3f3f3f3f
#define ppb push_back
#define ppf push_front
#define ll long long
#define ull unsigned long long
#define ssi(x) scanf("%d",&x)
#define ssd(x) scanf("%lf",&x)
#define ssc(x) scanf("%c",&x)
#define sss(x) scanf("%s",&x)
#define ssii(x,y) scanf("%d %d",&x,&y)
#define ssdd(x,y) scanf("%lf %lf",&x,&y)
#define sscc(x,y) scanf("%c %c",&x,&y)
#define ssss(x,y) scanf("%s %s",&x,&y)
#define eol printf("\n")
#define feol fprintf(f,"\n")
#define ssp printf(" ")
#define ggt getchar()
#define ppt putchar('.')
using namespace std;
string s;
int Find(int v,int q,int n)
{
    int i,j,k,l;
    for(i=v;(i+q+n)%n!=v;i=(i+q+n)%n)
    {
        if(s[i]!='w')break;
    }

    return s[i];
}

main()
{
    freopen ("beads.in","r",stdin);
    freopen ("beads.out","w",stdout);
    int i,j,k,l;
    int n;
    cin>>n>>s;
    int ans=0;
    for(int z=0;z<n;z++)
    {
        int sum=0;
        k=Find(z,1,n);
        for(i=z;;i=l){
            sum++;
            l=(i+1)%n;
            if(s[l]!='w' && s[l]!=k)
            break;
            if(l==z)break;
        }

        k=Find((z-1+n)%n,-1,n);
        for(j=(z-1+n)%n;j!=i;j=(j-1+n)%n){
            if(s[j]!='w' && s[j]!=k)
            break;
            sum++;
            if((j-1+n)%n==i)break;
        }

        ans=max(ans,sum);

    }

    cout<<ans<<'\n';
    return 0;

}

