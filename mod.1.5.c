#include <stdio.h>
#include <math.h>
int main() {
   int x;
   int result;
   printf("Введіть значення x: ");
   scanf("%d", &x);
   result = ((x*x*x*x) / sqrt(fabs(x - 10))) - (x*x);
   printf("Результат: %d\n", result);
   return 0;
}