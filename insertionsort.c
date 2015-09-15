# include<stdio.h>
#include<conio.h>
void main()
{ int i,j,k,new;
  int a[5]={5,3,7,1,4};
  clrscr();
  for(j=1;j<=5;j++)
  { for(i=1;i<j;i++)
    if(a[j]<a[i])
    { k=j-1;
      while(k<0)
      { new=a[j];
        a[j]=a[k];
        a[k]=a[k-1];
        k--;
      }
    }
  }
  printf("the sorted array is \t");
  for(i=1;i<=5;i++)
  { printf("%d",a[i]);
  getch();
}
