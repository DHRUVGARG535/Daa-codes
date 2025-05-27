#include<stdio.h>
int gcd(int,int);
int main() {

    int a,b;
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);

    if(a<0 || b<0){
        printf("Enter positive numbers");
        return 1;
    }

    printf("The gcd of %d and %d is %d",a,b,gcd(a,b));
    return 0;
}

int gcd(int a,int b){
    if(a==b)
    return a;
    else if(a>b)
    return gcd(a-b,b);
    else
    return gcd(a,b-a);
}