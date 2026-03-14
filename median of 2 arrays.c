#include <stdio.h>

void bubbleSort(double arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                double temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(){
    int n,x,y,i;
    printf("Enter the size of 1st and 2nd the array: ");
    scanf("%d %d",&n,&x);
    int arr[n], arr2[x];
    printf("Enter the elements of the 1st array: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);}
    printf("Enter the elements of the 2nd array: ");
    for(i=0;i<x;i++){
        scanf("%d",&arr2[i]);}
    double merged[n+x];
    int k=0;
    for(i=0;i<n;i++){
        merged[k++]=arr[i];
    }
    for(i=0;i<x;i++){
        merged[k++]=arr2[i];
    }
    bubbleSort(merged, n+x);
    printf("The merged array is: ");
    for(i=0;i<n+x;i++){
        printf("%lf ",merged[i]);
    }
    printf("\n");
    printf("The median of the merged array is: ");
    if((n+x)%2==0){
        printf("%lf", (merged[(n+x)/2-1]+merged[(n+x)/2])/2.0);

    } else {
        printf("%lf", merged[(n+x)/2]);
    }
    return 0;
}