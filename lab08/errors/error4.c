#include <stdio.h>

int *a, *b;

void f(int x) {
  int i[3];
  i[0] = x;
  i[1] = x + 1;
  i[2] = x + 2;
  a = i;
}  

void g(int x) {
  int i[3];
  i[0] = x;
  i[1] = x + 1;
  i[2] = x + 2;
  b = i;
}  

int main() {
  f(1);
  printf("a = {%d,%d,%d}\n", *a, *(a+1), *(a+2));
  g(2);
  printf("b = {%d,%d,%d}\n", *b, *(b+1), *(b+2));
}

