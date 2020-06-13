#include<stdio.h>
#include<conio.h>
int i,j,n,pivot,a[20];
void quick(int a[],int left,int right);
void swap(int a[],int i,int j);
void main()
{
 int n,a[20];
 textcolor(15);
 clrscr();
 printf("\n\nQUICK SORT");
 printf("\n\nEnter the limit : ");
 scanf("%d",&n);
 textcolor(4);
 textcolor(5);
 clrscr();
 printf("\n\nEnter the element\n\n");
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  quick(a,0,n-1);
  textcolor(10);
  printf("\n\nThe sorted list is \n\n");
  for(i=0;i<n;i++)
  printf("%d ",a[i]);
  getch();
  }
  void quick(int a[],int first,int last)
   {
    if(first<last)
     {
       pivot=a[first];
       i=first;
       j=last;
       while(i<j)
	{
	  while(a[i]<=pivot&&i<last)
	  i++;
	  while(a[j]>=pivot&&j>first)
	  j--;
	  if(i<j)
	  swap(a,i,j);
	  }
	  swap(a,first,j);
	  quick(a,first,j-1);
	  quick(a,j+1,last);
	  }
	  }
	  void swap(int a[],int i,int j)
	  {
	   int temp;
	   temp=a[i];
	   a[i]=a[j];
	   a[j]=temp;
	   }
