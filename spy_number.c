// the program to check whwther the number is spy or not
/* a spy number is that number whose sum and product of the digits are equal*/
#include<stdio.h>
int main(){
    printf("enter the number");
    int n;
    scanf("%d",&n);
    int sum=0;
    int pro=1;
    while(n!=0){
        int r;
        r=n%10;
        sum+=r;
        pro*=r;
        n=n/10;
    }
if(sum==pro){
    printf("the number is spy number");
}
else{
    printf("the number is not the spy number");
}
}