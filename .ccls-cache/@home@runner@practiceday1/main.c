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

int shopping() {
  int taka;
  printf("Enter ammount: ");
  scanf("%d", &taka);
  if (taka >= 10000)
  {
    printf("Gucci Bag");
  }
  else if ( taka >= 5000)
  {
    printf("Levis Bag");
  }
  else if ( taka >= 10000 && taka > 20000)
  {
    printf("Gucci Bag \n Gucci Belt");
  }
  else 
  {
    printf("Something");
  }
}

int zero() {
  int num;
  scanf("%d", &num);
  if (num > 0) {
    printf("positive\n");
  } else if (num < 0) {
    printf("negetive\n");
  } else {
    printf("zero\n");
  }
}

int main(void) {
  text();
  math();
  bejor();
  zero();
  shopping();

  return 0;
}