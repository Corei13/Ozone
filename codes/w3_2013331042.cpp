/*
 ID: alimurr2
 PROG: friday
 LANG: C++
*/
#include<stdio.h>
#include<stdlib.h>
int leap(int n)
{
 if(n%4!=0)
  return 0;
 else
 {
   if(n%100==0 && n%400==0)
     return 1;
   if(n%100==0)
    return 0;
   if(n%4==0)
    return 1;
 }
}
int main()
{
  int ara[10];
  int i,j,k,l,m,n,year,month,day,lasty,d,d13,dla;

   FILE *fin  =fopen("friday.in","r");
   FILE *fout =fopen("friday.out","w");

  while(fscanf(fin,"%d",&k)==1)
  {
  for(i=0;i<=7;i++)
  ara[i]=0;
  n=1900+k-1;
  year=1900;
  month=1;
  day=3;

  while(year<=n)
  {
   if(month%12==0)
   {
    year=year+1;
    month=12;
   }
   //day=3;
   d13=(day+12)%7;
   ara[d13]=ara[d13]+1;

   if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
   dla=(day+30)%7;
   if(month==2 && leap(year)==0)
   dla=(day+27)%7;
   if(month==2 && leap(year)==1)
   dla=(day+28)%7;
   if(month==4 || month==6 || month==9 || month==11)
   dla=(day+29)%7;
   //dla=dla%7;
   day=dla+1;
   month++;
   month=month%12;
  }
  for(i=1;i<7;i++)
  fprintf(fout,"%d ",ara[i]);
  fprintf(fout,"%d\n",ara[0]);
  }
  exit(0);
}
