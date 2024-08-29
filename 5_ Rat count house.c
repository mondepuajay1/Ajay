//rats programm
#include <stdio.h>
int main()
{
  int i,n,a;
  int rats,r=7,units=2,sum=0;
  int arr[]= {2,8,3,5,7,4,1,2};
  n=sizeof(arr)/sizeof(arr[0]);
  rats=r*units;
  for(i=0; i<n; i++)
  {
    sum=sum+arr[i];
    if(sum>=rats)
      break;

  }
  printf("%d",i+1);
  return 0;
}