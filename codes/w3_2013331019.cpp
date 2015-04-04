/*
ID: algocer1
PROG: friday
LANG: C++
*/
#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    ofstream fout ("friday.out");
    ifstream fin ("friday.in");

    int sat = 0, sun = 0, mon = 0, n, k;
    int tues = 0, wed = 0, thurs = 0;
    int fri = 0, state1 = 3;
    int state[13] = {31, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    fin >> n;

    for(int i = 1900; i < 1900 + n; i++) {
         if(((i % 100 != 0) && (i % 4) == 0) || ((i % 400) == 0)) state[2] = 29;
         else state[2] = 28;
         for(int j = 0; j < 12; j++) {
            state1 = ((state1 + state[j]) % 7);
            if(state1 == 0) sun++;
            else if(state1 == 1) mon++;
            else if(state1 == 2) tues++;
            else if(state1 == 3) wed++;
            else if(state1 == 4) thurs++;
            else if(state1 == 5) fri++;
            else if(state1 == 6) sat++;

         }
         //state[1] = 28;
         //cout << sat << " " << sun << " "  << mon << " " << tues << " " << wed << " " << thurs << " " << fri << endl;
    }
    fout << sat << " " << sun << " "  << mon << " " << tues << " " << wed << " " << thurs << " " << fri << endl;

    return 0;
}

