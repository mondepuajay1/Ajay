#include<stdio.h>
int main(){
//int l=0;
char str[1000];
char ch1[50];
char ch2[50];
scanf("%s",str);
scanf("%s",ch1);
scanf("%s",ch2);
//while(str[++l]);
for(int i=0;i<1000;i++){
if(str[i]==ch1[0])
str[i]=ch2[0];
else if(str[i]==ch2[0])
str[i]=ch1[0];
}
printf("%s",str);
}