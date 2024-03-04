#include <stdio.h>

int main(void) {
  int a;
  int b;
  int c;

  int a1 = 0;
  int b1 = 0;
  int c1 = 0;

  printf("合計する値を3つ入力して下さい\n");

  a1 = scanf("%d", &a);
  b1 = scanf("%d", &b);
  c1 = scanf("%d", &c);

  printf("あなたが入力した値%d、%d、%dの合計は%dです\n", a,b,c,a+b+c);
  printf("あなたが入力した値%d、%d、%d\n", a1, b1, c1);
  
  return 0;
}
