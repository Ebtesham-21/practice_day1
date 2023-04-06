#include <stdio.h>

int text() {
  printf("Recently I heard that you’ve achieved 95%% marks in your exam.\n");
  printf("This is brilliant! \n");
  printf("I wish you’ll shine in your life! \t  Good luck with all the "
         "barriers in your life.\n");
}

int math() {
  int a, b, sum, sub, multi;
  float division;
  printf("Enter two integers: ");
  scanf("%d %d", &a, &b);
  sum = a + b;
  sub = a - b;
  multi = a * b;
  division = a / b;

  printf("%d\n", sum);
  printf("%d\n", sub);
  printf("%d\n", multi);
  printf("%.2f\n", division);
}

int bejor() {
  int i;
  scanf("%d", &i);
  if (i % 2 == 0) {
    printf("even\n");

  } else {
    printf("odd\n");
  }
}

int zero() {
  int num;
  scanf("%d", &num);
  if (num > 0) {
    printf("positive");
  } else if (num < 0) {
    printf("negetive");
  } else {
    printf("zero");
  }
}

int main(void) {
  text();
  math();
  bejor();
  zero();

  return 0;
}