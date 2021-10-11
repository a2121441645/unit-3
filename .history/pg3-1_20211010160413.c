#include<stdio.h>
#define maxn 1000000
int main()
{
  int a[maxn];
  int x, n = 0;
  while(scanf("%d",&x) == 1)
    a[n++] = x;
  for(int i =n-1; i >= 1; i--)
    printf("%d ", a[i]);
  printf("%d\n", a[0]);
  return 0;
}
