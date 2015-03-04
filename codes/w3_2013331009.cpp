/*
 ID:  tta.mou1
PROG:  friday
LANG:  C++
*/

#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<algorithm>
#include<vector>
#include<string>
#include<stack>
#include<queue>
#include<map>
#include<sstream>
#include<set>
#include<utility>

using namespace std;

int dx[] = { 0, 1,  0, -1, -1, 1,  1, -1 };
int dy[] = { 1, 0, -1,  0,  1, 1, -1, -1 };

int xx[] = { -1, 1, 2, 2,  1, -1, -2, -2 };
int yy[] = {  2, 2, 1,-1, -2, -2, -1,  1 };

int main()
{
    freopen("friday.in","r",stdin);
    freopen("friday.out","w",stdout);

    int arr[8] = {0}, day=-3, i, j, n;
    scanf("%d", &n);

    for(i=1900; i<1900+n; i++)
    {
        for(j=0; j<12; j++)
        {
            if(j==0 || j==1 || j==3 || j==5 || j==7 || j==8 || j==10)
            {
                day += 3;
                //printf("1-%d\n", day);
            }
            else if(j==4 || j==6 || j==9 || j==11)
            {
                day += 2;
                //printf("2-%d\n", day);
            }
            else if(j==2)
            {
                if( ( (i%4==0) && (i%100!=0) ) || (i%400 == 0)) day += 1;
                //printf("3-%d\n", day);
            }
            day %= 7;
            arr[day]++;
        }
    }

    for(i=0; i<6; i++) printf("%d ", arr[i]);
    printf("%d\n", arr[6]);
    return 0;
}

