#include<stdio.h>
int main()
{
  printf("Hello, World!");
  return 0;
}#include <stdio.h>

int main()
{
    char a[0];
    int n=0,b=1;
    char A,B,C;
    scanf("%[^'\n']s",a);
    //printf("%s\n",a);
    while(a[++n]);
    a[n];
    for(int i=1;i<n;i+2){
        if(a[i]==A)
            b*a[i+1];
        else if(a[i]==B)
            b|a[i+1];
        