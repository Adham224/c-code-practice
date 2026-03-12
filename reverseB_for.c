#include <stdio.h>


int reverseNumber(int num) {
    int reversed = 0;
    int x = num;
    int Count = 0;
    while (x > 0) {
        Count++;
        x= x/10;
    }
    for (int i = 0; i <Count; i++) {
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
        int reversed = reverseNumber(num);
        printf("%d\n", reversed);
    }
    
    return 0;
}