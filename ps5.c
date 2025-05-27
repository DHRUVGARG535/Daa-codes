#include<stdio.h>
int max(int[],int,int);
void main() {

    int n,i;
    printf("Enter number of elements in the array : ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter element number %d : ",i+1);
        scanf("%d",&arr[i]);
    }

    int res = max(arr,0,n-1);
    int res1 = min(arr,0,n-1);
    printf("The maximum is %d ",res);
    printf("The minimum is %d",res1);

}

int max(int arr[],int low,int high){

    int mid = (low+high)/2;
    if(low==high)
    return arr[low];

    int left = max(arr,low,mid);
    int right = max(arr,mid+1,high);
    return left>right ? left : right; 
}

int min(int arr[],int low,int high){

    int mid = (low+high)/2;
    if(low==high)
    return arr[low];

    int left = min(arr,low,mid);
    int right = min(arr,mid+1,high);
    return left<right ? left : right; 
}