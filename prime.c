#include <stdio.h>
int main(){
    int n,i,prime=1;
    printf("Enter a number: ");
    scanf("%d",&n);
  if (n<=1 || n%2==0 && n!=2){
    prime=0;
  }
  else{
    for(i=3;i*i<=n;i+=2){
        if(n%i==0){
            prime=0;
            break;
        }
    }
  }
  if(prime==1){
    printf("%d is a prime number",n);
  }else{
    printf("%d isn't a prime number",n);
  }
  return 0;
}