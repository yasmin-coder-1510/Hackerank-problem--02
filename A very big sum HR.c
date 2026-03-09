#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);

  long int arr[n],sum=0;

  for(int i=0;i<n;i++)
 {
  scanf("%ld",&arr[i]);
 }

 for(int i=0;i<n;i++)
 {
   sum=sum+arr[i] ;
 }

 printf("%ld",sum) ;
 return 0;

}
