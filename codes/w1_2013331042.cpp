/*
ID: alimurr2
PROG: ride
LANG: C++
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
  char str[10],str1[10];
  long i,j,k,l,m,n;
  FILE *fin  = fopen ("ride.in", "r");
  FILE *fout = fopen ("ride.out", "w");

   //fscanf (fin, "%d %d", &a, &b);	/* the two input integers */
   // fprintf (fout, "%d\n", a+b);

  while((fscanf(fin,"%s%s",str,str1))==2)
  {
    i=0,k=1;
    while(str[i])
    {
     k=k*(str[i]-'A'+1);
     i++;
    }
    i=0,n=1;
    while(str1[i])
    {
     n=n*(str1[i]-'A'+1);
     i++;
    }
    if((k%47)==(n%47))
      fprintf(fout,"GO\n");
    else
      fprintf(fout,"STAY\n");
  }
  exit(0);
}
