#include <stdio.h>
int hello(char name[50]){
    printf("Hello, %s!\n", name);
    return 0;
}   
int main(){
    printf(" write your name: ");
    char name[50];
    scanf("%s", name);
    if(name[0]>='a' && name[0]<='z'){
        name[0] = name[0] - ('a' - 'A');
    }
    hello(name);
    return 0;
}