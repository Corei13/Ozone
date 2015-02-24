/*
ID: mk.shah1
PROG: gift1
LANG: C++
*/
#include <cstdio>
#include <sstream>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <set>
#include <queue>
#include <stack>
#include <list>
#include <iostream>
#include <fstream>
#include <numeric>
#include <string>
#include <vector>
#include <cstring>
#include <map>
#include <iterator>
#define SIZE 30
using namespace std;

map<string, long int> account;

int main(){
    freopen("gift1.in", "r", stdin);
    freopen("gift1.out", "w", stdout);
    long int np, tmp1, tmp2, ppl, donate, amnt, i, j, k;
    char name[SIZE], data[SIZE][SIZE];

    while( scanf("%ld", &np) == 1 ){
        account.clear();
        for( i = 0; i<np; i++ ){
            scanf("%s", data[i]);
            account[data[i]] = 0;

        }
        for( i = 0; i<np; i++ ){
            scanf("%s", name);
            scanf("%ld %ld", &donate, &ppl);
            if( ppl == 0 )
                continue;
            account[name] -= donate;
            account[name] += ( donate%ppl );
            amnt = donate/ppl;
            for( j = 0; j<ppl; j++ ){
                scanf("%s", name);
                account[name] += amnt;
            }
        }
        for( i = 0; i<np; i++ ){
            printf("%s %ld\n", data[i], account[data[i]]);
        }
    }

    return 0;
}
