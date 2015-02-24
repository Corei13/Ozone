/*
ID: nafisan2
PROG: gift1
LANG: C++
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <string>
#include <algorithm>
#include <iostream>

using namespace std;


struct friends {
    int spend;
    int receive;
    char name [20];
} A [12] = {0, 0, 0};

int main ()
{
    freopen ("gift1.in", "r", stdin);
    freopen ("gift1.out", "w", stdout);

    long np, i, money, person, divide, c;
    char giver [20], receiver [20];

    scanf ("%ld", &np);

    for (i = 0; i < np; i++)
    scanf ("%s", A [i].name);

    for (c = 0; c < np; c++ ) {

        scanf ("%s", giver);
        scanf ("%ld", &money);

        i = 0;
        while (strcmp (A [i].name, giver) != 0)
            i++;
        A [i].spend += money;

        scanf ("%ld", &person);
        if (person == 0) {
            A [i].receive += money;
            continue;
        }

        divide = person;
        A [i].receive += money - ((money / person) * person);

        while (person--) {
            scanf ("%s", receiver);
            i = 0;
            while (strcmp (A [i].name, receiver) != 0)
                i++;
            A [i].receive += (money / divide);
        }
    }

    for (i = 0; i < np; i++)
        printf("%s %ld\n", A [i].name, A [i].receive - A [i].spend);

    return 0;
}
