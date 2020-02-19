#include <stdio.h>

int main(void) {
  int a, b, sum, n, i;
  printf("Enter n: ");
  scanf("%d", &n);
  a=0;
  b=1;
  for(i=0;i<n;i++){
    sum=a+b;
    printf("%d ", b);
    a=b;
    b=sum;
  }
  return 0;
}