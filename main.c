
#include <stdio.h>


int main(){

  int n = 4; // Número de fibonacci
  int fib[n];

  if (n == 0){

    fib[0] = 0;
   }

  else if (n == 1){

    fib[1] = 1;

  }

  else{

    fib[0] = 0;
    fib[1] = 1;

    for(int i = 2; i <= n; i++){

      fib[i] = fib[i-1]+fib[i-2];
     }
  }

  printf("Número de Fibonnaci para n = %d é: %d\n ",n,fib[n]);

  return 0;
}
