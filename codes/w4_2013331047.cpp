/*
ID:fb/tuhinto1
PROG:beads
LANG: C++
*/

#include<bits/stdc++.h>
using namespace std;


int main()
{
    freopen("beads.in","r",stdin);
    freopen("beads.out","w",stdout);
    int n;
    char ch[1111];
    while(cin>>n>>ch)
    {
        int red=0,blue=0,MAX=0,flag=0,j=0,white=0,re=0,bl=0,rw=0;
        for(int i=n-1; i>=0; i--)
            if(ch[i]=='b')
            {
                flag=2;
                bl++;
            }
            else if(ch[i]=='r')
            {
                flag=1;
                re++;
            }
        if(flag && re && bl)
            for(int i=0; i<2*n; i++)
            {
                j=i;
                if(i>=n) j-=n;
                if(flag==1 && ch[j]=='b')
                {
                    MAX=max(MAX,blue+red-rw);
                    //printf("%d  %d  %d  %d  %d\n",j,blue,red,white,blue+red-rw);
                    flag=2;
                    rw=blue=white;
                }
                else if(flag==2 && ch[j]=='r')
                {
                    MAX=max(MAX,blue+red-rw);
                    //printf("%d  %d  %d  %d  %d\n",j,blue,red,white,blue+red-rw);
                    flag=1;
                    rw=red=white;
                }
                if(flag==1&&(ch[j]=='r'||ch[j]=='w'))
                {
                    red++;
                    if(ch[j]=='r') white=0;
                    else white++;
                }
                else if(flag==2&&(ch[j]=='b'|| ch[j]=='w'))
                {
                    blue++;
                    if(ch[j]=='b') white=0;
                    else white++;
                }
                //printf("%d  %d  %d   %d\n",j,blue,red,blue+red-white);
                //MAX=max(MAX,blue+red-white);

            }
        else MAX=n;
        if(MAX>n) MAX=n;
        printf("%d\n",MAX);
    }

    return 0;
}
