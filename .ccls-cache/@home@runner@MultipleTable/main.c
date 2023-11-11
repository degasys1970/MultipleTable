#include <stdio.h>

int main(void) {
  int number;
  printf("Adj meg egy egész számot: ");
  scanf( "%d", &number );
  for( int i = 1; i <= 10; i++ ) {
    printf( "%d * °%d = %d \n", i, number, i*number );
  }
  return 0;
}