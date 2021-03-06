/*
ID: mk.shah1
LANG: C
TASK: beads
*/
#include <stdio.h>
#include <string.h>

int main(){
    FILE *fin  = fopen ("beads.in", "r");
    FILE *fout = fopen ("beads.out", "w");
    int n, len, i, j, sum1 = 0, sum2 = 0;
    fscanf(fin, "%d\n", &n);
    if( n<3 || n>350 ){
        return 0;
    }
    char necklace[n];
    fscanf(fin, "%s", necklace);
    for( i = 0; i<n; i++ ){
        if( necklace[i] == 'b' || necklace[i] == 'r' || necklace[i] == 'w' ){
            continue;
        }
        else{
            return 0;
        }
    }
    len = (2*n) + 1;
    char nklc[len];
    for( i = 0, j = 0; i<n; i++, j++ ){
        nklc[i] = necklace[j];
    }
    for( j = 0; j<n; i++, j++ ){
        nklc[i] = necklace[j];
    }
    nklc[i] = '\0';
    len = strlen(nklc);
    int count[len], a = 0, b, largest_bd, x = 0, y = 0, z = 0;

    for( i = 0; i<len; i++ ){
        count[i] = 0;
    }
    for( i = 0; i<len; i++ ){
        if( nklc[i] == 'b' && nklc[i+1] == 'r' ){
            x = 10;
            y = 10;
            z = 10;
            for( j = i; j>=0; j-- ){
                if( nklc[j] == 'r' ){
                    break;
                }
                sum1++;
            }
            for( j = i+1; j<len; j++ ){
                if( nklc[j] == 'b' ){
                    break;
                }
                sum2++;
            }
            count[a] = sum1 + sum2;
            a++;
            sum1 = sum2 = 0;
        }
        else if( nklc[i] == 'r' && nklc[i+1] == 'b' ){
            x = 10;
            y = 10;
            z = 10;
            for( j = i; j>=0; j-- ){
                if( nklc[j] == 'b' ){
                    break;
                }
                sum1++;
            }
            for( j = i+1; j<len; j++ ){
                if( nklc[j] == 'r' ){
                    break;
                }
                sum2++;
            }
            count[a] = sum1 + sum2;
            a++;
            sum1 = sum2 = 0;
        }
        else if( nklc[i] == 'w' && nklc[i+1] == 'r' ){
            x = 10;
            z = 10;
            for( j = i; j>=0; j-- ){
                if( nklc[j] == 'r' ){
                    break;
                }
                sum1++;
            }
            for( j = i+1; j<len; j++ ){
                if( nklc[j] == 'b' ){
                    break;
                }
                sum2++;
            }
            count[a] = sum1 + sum2;
            a++;
            sum1 = sum2 = 0;
        }
        else if( nklc[i] == 'r' && nklc[i+1] == 'w' ){
            x = 10;
            z = 10;
            for( j = i; j>=0; j-- ){
                if( nklc[j] == 'b' ){
                    break;
                }
                sum1++;
            }
            for( j = i+1; j<len; j++ ){
                if( nklc[j] == 'r' ){
                    break;
                }
                sum2++;
            }
            count[a] = sum1 + sum2;
            a++;
            sum1 = sum2 = 0;
        }
        else if( nklc[i] == 'w' && nklc[i+1] == 'b' ){
            x = 10;
            y = 10;
            for( j = i; j>=0; j-- ){
                if( nklc[j] == 'b' ){
                    break;
                }
                sum1++;
            }
            for( j = i+1; j<len; j++ ){
                if( nklc[j] == 'r' ){
                    break;
                }
                sum2++;
            }
            count[a] = sum1 + sum2;
            a++;
            sum1 = sum2 = 0;
        }
        else if( nklc[i] == 'b' && nklc[i+1] == 'w' ){
            x = 10;
            y = 10;
            for( j = i; j>=0; j-- ){
                if( nklc[j] == 'r' ){
                    break;
                }
                sum1++;
            }
            for( j = i+1; j<len; j++ ){
                if( nklc[j] == 'b' ){
                    break;
                }
                sum2++;
            }
            count[a] = sum1 + sum2;
            a++;
            sum1 = sum2 = 0;
        }
    }
    largest_bd = count[0];
    for( i = 0; i<len; i++ ){
        if( count[i]>largest_bd ){
            largest_bd = count[i];
        }
    }
    b = strlen(necklace);
    if( x == 0 ){
        fprintf(fout, "%d\n", b);
        return 0;
    }
    else if( y == 0 ){
        fprintf(fout, "%d\n", b);
        return 0;
    }
    else if( z == 0 ){
        fprintf(fout, "%d\n", b);
        return 0;
    }
    else if( largest_bd>b ){
        fprintf(fout, "%d\n", b);
        return 0;
    }
    fprintf(fout, "%d\n", largest_bd);

    return 0;
}
