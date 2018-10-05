#include<stdio.h>
#include<math.h>

int main() {
  int k = 0;
  int s = 0;
  int i = 0;
  scanf("%d", &k);
  for (int i=1; i<k+1; i++ )
    if (i % 5 == 0) {s+=1;}
  printf("%.d\n", s);
  return 0;
}