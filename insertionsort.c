#include<stdio.h>
int main()
{ int i,j,k,t,l,pos;
  int a[5]={5,3,7,1,4};

for(k=0;k<5;k++)
{
l=a[k];
for(i=k;i<5;i++)
{
if(a[i]>l){l=a[i];pos=i;}
}
t=a[k];
a[k]=a[pos];
a[pos]=t;
printf("%d ",l);
}

  printf("the sorted array is \t");
  for(i=0;i<5;i++)
  { printf("%d  ",a[i]);}
return 0;
}
