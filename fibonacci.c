#include <stdio.h>
int fib(n){
  if(n==0) return 0;
  else if(n==1) return 1;
  else return fib(n-2)+fib(n-1);
}
int main(){
 printf("%d",fib(5));
 return 0;
}
