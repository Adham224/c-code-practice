#include <stdio.h>
int main(){
    int n,i;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++){
        printf("\nElement %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("The elements of the array are: ");
    for(i=0;i<n;i++){
        printf("\nElement %d: %d",i+1,arr[i]);
    }
    printf(" \nthe maximum and minimum elements of the array are: ");
    int max=arr[0],min=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("%d %d",max,min);
    return 0;
}