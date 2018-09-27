#include <stdio.h>

int main(){


  int a = 1000;

  for (a; a > 0; a = a - 5){

    printf("a = %d\n", a);
    
    if( a % 10 == 0) {
      a += 10;
    }

    a -= 3;
  }

  return 0;
}
