#include <stdio.h>
int main(){
    int x, y;
    printf("enter a number:");
    scanf("%d",&x);
      
    
    if (x == 0) {
        printf("0");
    } else {
        if (x < 0) {
            printf("-");
            x = -x;
        }
        while (x > 0) {
            y = x % 10;
            printf("%d", y);
            x = x / 10;
        }
    }
    printf("\n");
    return 0;
}
  