#include <stdio.h>
void print(int, int);

int main()
{
  int n;

  scanf("%d", &n);

  while(n){
  print(1, n);
  }
  return 0;
}
void print(int s, int n) {
  if (s > n)
    return;

  printf("%d", s);

  print(++s, n);
}
