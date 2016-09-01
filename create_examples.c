#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM 1000000
#define MAX 500000

int main () {
  int i = 1;
  srand(time(NULL));
  while (i <= NUM) {
    int r = rand() % MAX;
    printf("%d\n", r);
    i++;
  }
}