/*
ID: kurisub1
PROG: ride
LANG: C++
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

    freopen ("ride.in","r",stdin);
//    freopen ("input.txt","r",stdin);
    freopen ("ride.out","w",stdout);
    int a,b;
    char s[10],t[10];
    int i,j,k,l;
    cin>>s>>t;
    int n,m;
    n=strlen(s);
    m=strlen(t);
    k=1;
    for(i=0;i<n;i++)
    k=k*(int)(s[i]-'A'+1);
    l=1;
    for(i=0;i<m;i++)
    l=l*(int)(t[i]-'A'+1);

    if(k%47==l%47)
    cout<<"GO\n";
    else
    cout<<"STAY\n";
    return 0;



}

