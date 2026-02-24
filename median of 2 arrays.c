#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    double diff = *(double *)a - *(double *)b;
    if (diff > 0) return 1;
    else if (diff < 0) return -1;
    else return 0;
}

int main(){
    int n,x,y,i;
    printf("Enter the size of 1st and 2nd the array: ");
    scanf("%d %d",&n,&x);
    int arr[n], arr2[x];
    printf("Enter the elements of the 1st array: ");
    for(i=0;i<n;i++){
        printf("\nElement %d: ",i+1);
        scanf("%d",&arr[i]);}
    printf("Enter the elements of the 2nd array: ");
    for(i=0;i<x;i++){
        printf("\nElement %d: ",i+1);
        scanf("%d",&arr2[i]);}
    double merged[n+x];
    int k=0;
    for(i=0;i<n;i++){
        merged[k++]=arr[i];
    }
    for(i=0;i<x;i++){
        merged[k++]=arr2[i];
    }
    qsort(merged, n+x, sizeof(double), compare);
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