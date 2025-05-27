#include <stdio.h>
#define max 100
int linear(int[],int);
int main() {
    int n,i;
    printf("Enter size of array : ");
    scanf("%d",&n);

    int arr[max];
    
    for(i=0;i<n;i++){
        printf("Enter element number %d : ",i+1);
        scanf("%d",&arr[i]);
    }

    linear(arr,n);

}

int linear(int arr[],int n){
    int key,i,f=0;

    printf("Enter key to found : ");
    scanf("%d",&key);

    for(i=0;i<n;i++){
        if(arr[i]==key)
        f++;
    }

    if(f==1)
    printf("Key found");
    else
    printf("Key not found");

}