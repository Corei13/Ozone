/*
ID: kurisub1
PROG: gift1
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
#include<map>
#include<set>
#define PI 2*acos(0)
#define inf 0x3f3f3f3f
#define ppb push_back
#define ppf push_front
#define clr clear()
#define emp empty()
#define ll long long
#define ull unsigned long long
#define forit(it, s) for(__typeof(s.begin()) it = s.begin(); it != s.end(); it++)
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
main()
{
    freopen ("gift1.in","r",stdin);
    freopen ("gift1.out","w",stdout);
    map<string,int> s;
    string z;
    int i,j,k,l;
    int n;
    cin>>n;
    vector<string> input(n);
    map<string,int> init;
    for(i=0;i<n;i++)
    {cin>>input[i];
    s[input[i]]=0;}

    for(i=0;i<n;i++)
    {
        cin>>z>>k>>l;
        s[z]+=!l?k:k%l;
        init[z]=k;
        if(l==0)continue;
        for(j=0;j<l;j++)
        {cin>>z;s[z]+=k/l;}
    }

    for(i=0;i<n;i++)
    cout<<input[i]<<' '<<s[input[i]]-init[input[i]]<<'\n';
    return 0;



}

