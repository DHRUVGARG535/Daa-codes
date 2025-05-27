  #include<stdio.h>
  int pair(int[],int);
  void main() {
    int n,i;
    printf("Enter number of elements in the array : ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter element number %d : ",i+1);
        scanf("%d",&arr[i]);
    }

    if(!pair(arr,n))
    printf("No pair found");

}

int pair(int arr[],int n){
    int i,j,key;
    printf("Enter sum of key to found : ");
    scanf("%d",&key);

 
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]+arr[j] == key){
                printf("The pair with the sum %d is: (%d, %d)\n", key, arr[i], arr[j]); 
                return 1;
            }
        }
    }
    return 0;
}