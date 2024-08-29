#include<stdio.h>
int main(){
    int n,k,m;
    int a[100];
    printf("ajay enter the array size");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("ajay please enter the array");
        scanf("%d",&a[i]);
    }
   printf("ajay babu enter the position");
   scanf("%d",&k);
   printf("ajay babu enter the inserted value");
   scanf("%d",&m);
    int g=n;
    int ram;
    for(int i=0;i<n;i++){
        if(a[i]==k)
        ram=i;
    }
    for(int i=n;i>ram;i--){
        a[n]=a[n-1];
        n--;
       
    }
    a[ram]=m;
    for(int i=0;i<g+1;i++){
        printf("%d",a[i]);
        
    }
}