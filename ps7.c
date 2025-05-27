#include<stdio.h>
int duplicate(int[],int);
void main() {
    int n,i;
    printf("Enter number of elements in the array : ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter element number %d : ",i+1);
        scanf("%d",&arr[i]);
    }

    duplicate(arr,n);

}

int duplicate(int arr[],int n){

    int i,j;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                printf("Duplicate element is %d",arr[j]);
                return 0;
            }
        }
    }    

    printf("No duplicate element was found");

}