// the program to check whether the number is spy or not
/* a spy number is that number whose factors are not other than 0 and itself*/
#include<stdio.h>
int main(){
    printf("enter the number");
    int n;
    scanf("%d",&n);
    int flag=0;
    
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag++;
            break;
        }
    }
if(flag==0){
    printf("the number is prime number");
}
else{
    printf("the number is not prime number");
}
}