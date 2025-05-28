#include <stdio.h>
#define max 100
int binary(int[],int);
int main() {
    int n,i;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int arr[max];
    
    for(i=0;i<n;i++){
        printf("Enter element number %d : ",i+1);
        scanf("%d",&arr[i]);
    }

    binary(arr,n);
  

}

int binary(int arr[],int n){
    int key,st=0;
    int end = n-1;
    printf("Enter key : ");
    scanf("%d",&key);

    while(st<=end){
        int mid = (st+end)/2;
        if(arr[mid]>key)
            end = mid-1;
        else if(arr[mid]<key)
            st = mid +1;
        else if(arr[mid]==key){
            printf("Key found");
            return 0;
        }
        
    }
    printf("key not found");

}