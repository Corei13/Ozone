/*
ID: mk.shah1
PROG: ride
LANG: C++
*/
#include <cstdio>
#include <sstream>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <cstring>
#define SIZE 10
using namespace std;

int main(){
    freopen("ride.in", "r", stdin);
    freopen("ride.out", "w", stdout);
    long long int len1, len2, sum, res1, res2, i, j, k;
    char str1[SIZE], str2[SIZE];

    while( scanf("%s\n%s", str1, str2) == 2 ){
        len1 = strlen( str1 );
        len2 = strlen( str2 );
        sum = 1;
        for( i = 0; i<len1; i++ )
            sum *= ( str1[i] - 'A' + 1 );
        res1 = sum%47;
        sum = 1;
        for( i = 0; i<len2; i++ )
            sum *= ( str2[i] - 'A' + 1 );
        res2 = sum%47;
        if( res1 == res2 )
            printf("GO\n");
        else
            printf("STAY\n");
    }

    return 0;
}
