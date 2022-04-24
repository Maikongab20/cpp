#include <stdio.h>

int modulo(int n)
{

  if (n <= 10)
  {

    printf("%d", n * n);
    return n * 2;
  }
  else
  {

    printf("%d", n * n);
    return modulo(modulo(n / 3));
  }
}

int modulo2(int a, int b)
{

  if (b <= 0 && a >= 21)
  {
    return a + b;
  }
  else
  {
    return modulo2(a + 2, b - 2) * modulo2(a + 1, b - 1);
  }
}

int main()
{

  modulo(27);

  return 0;
}