#include <stdio.h>


int reverseNumber(int num) {
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num = num / 10;
    }
    return reversed;
}

int main() {
    int num;
    printf("Enter a series of integers (end with -1):\n");
    
    while (scanf("%d", &num) == 1) {
        if (num == -1) {
            printf("%d\n", -1);
            break;
        }
        printf("%d\n", reverseNumber(num));
    }
    
    return 0;
}
