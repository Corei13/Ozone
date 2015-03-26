/*
ID: algocer1
PROG: gift1
LANG: C++
*/


#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <map>
#include <fstream>

using namespace std;

int main()
{
    ofstream fout ("gift1.out");
    ifstream fin ("gift1.in");
    string nam, var;
    vector<string>vs;
    map<string, int>suru;
    int koyta, a, b, c, d, q;

    fin >> koyta;
    c = koyta;

    while(koyta--) {
        fin >> nam;
        vs.push_back(nam);
    }
    while(c--) {
        fin >> nam;
        fin >> a >> b;
        if(b != 0) suru[nam] += (a % b);
        suru[nam] -= a;
        if(b != 0) q = a / b;
        while(b--) {
            fin >> var;
            suru[var] += q;
        }
    }
    for(int i = 0; i < vs.size(); i++) fout << vs[i] << " " << suru[vs[i]] << endl;

    return 0;

}
