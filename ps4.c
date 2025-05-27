#include<stdio.h>
void tower(int,char,char,char);
void main(){

    int n;
    printf("enter number of disks : ");
    scanf("%d",&n);

    tower(n,'A','B','C');

}

void tower(int n,char beg,char aux,char end){

    if(n==0)
    printf("illegal entry");
    if(n==1)
    printf("move disk from %c to %c\n",beg,end);
    else{
        tower(n-1,beg,end,aux);
        tower(1,beg,aux,end);
        tower(n-1,aux,beg,end);
    }

}