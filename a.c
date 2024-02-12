#include <stdio.h>

int main() {
  int intSize = sizeof(int);
  float floatSize = sizeof(float);
  double doubleSize = sizeof(double);
  char charSize = sizeof(char);

  printf("Size of int: %d bytes\n", intSize);
  printf("Size of float: %d bytes\n", floatSize);
  printf("Size of double: %d bytes\n", doubleSize);
  printf("Size of char: %d bytes\n", charSize);

  return 0;
}
