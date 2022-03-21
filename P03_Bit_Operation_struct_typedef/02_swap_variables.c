#include <stdlib.h>
#include <stdio.h>

int main(){
  int a = 3;
  int b = 4;
  printf("a: %d; b: %d\n", a, b);

	a = a ^ b; // x now becomes 15 (1111)
	b = a ^ b; // y becomes 10 (1010)
	a = a ^ b; // x becomes 5 (0101)

  /*
	 int temp = a;
	 a = b;
	 b = temp;
  */
  printf("a: %d; b: %d\n", a, b);
  return EXIT_SUCCESS;
}
