/*
ID: mk.shah1
LANG: C
TASK: friday
*/
#include <stdio.h>

int main(){
    FILE *fin  = fopen ("friday.in", "r");
    FILE *fout = fopen ("friday.out", "w");
    int years, y, m, d, cal[7], f, i, j = -1, x = 7;
    for( i = 0; i<7; i++ ){
        cal[i] = 0;
    }
    fscanf(fin, "%d", &years);
    if( years>0 && years<=400 ){
        for( y = 1900; y < 1900+years; y++ ){
            if( y%4 == 0 ){
                if( y%100 == 0 ){
                    if( y%400 == 0 ){
                        f = 29;
                    }
                    else{
                        f = 28;
                    }
                }
                else{
                    f = 29;
                }
            }
            else{
                f = 28;
            }
            for( m = 0; m<12; m++ ){
                if( m == 1){
                    if( f == 29 ){
                        d = 29;
                    }
                    else{
                        d = 28;
                    }
                }
                else if( m==3 || m==5 || m==8 || m==10 ){
                    d = 30;
                }
                else if( m==0 || m==2 || m==4 || m==6 || m==7 || m==9 || m==11 ){
                    d = 31;
                }
                for( i = 0; i<d; i++ ){
                    j++;
                    if( j == 7 ){
                        j = 0;
                    }
                    if( i == 12 ){
                        cal[j]++;
                    }
                }
            }
        }
        fprintf(fout, "%d %d %d %d %d %d %d\n", cal[5], cal[6], cal[0], cal[1], cal[2], cal[3], cal[4]);

        return 0;
    }
    else{
        return 0;
    }
}
