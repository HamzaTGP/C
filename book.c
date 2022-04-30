#include <stdio.h>

/* int main()
{
  printf("Hello world\t");
  printf("This is a C program");
} */


// Fahrenhite to Celsius program
/* int main()
{
  float fahr, celsius;
  float lower, upper, step;

  lower = 0;    // lower limit
  upper = 300;  // upper limit
  step = 20;    // step size

  fahr = lower;
  printf("Fahrenhite  |  Celsius\n");
  printf("-----------------------\n");
  while (fahr <= upper)
  {
    celsius = 5.0/9.0 * (fahr-32.0);
    printf("%3.0f\t\t%6.2f\n", fahr, celsius);
    fahr = fahr + step;
  }

  return 0;
} */

// Celsius to Fahrenhite program
/* int main()
{
  float fahr, celsius;
  float lower, upper, step;

  lower = 0;
  upper = 150;
  step = 15;

  celsius = lower;
  while (celsius <= upper)
  {
    fahr = 32.0 + (celsius * 9.0/5.0);
    printf("%3.0f\t%6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
} */

// Fahrenhite to Celsius with for statements and Symbolic Constants
/*
#define LOWER 0     // The lower limit
#define UPPER 300   // The upper limit
#define STEP 20     // The step size

int main()
{
  int fahr;
  float celsius;

  for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    {
      celsius = (5.0/9.0)*(fahr-32.0);
      printf("%3d %6.1f\n", fahr, celsius);
    }
} */

int main()
{
  int c;

  c = getchar();
  while (c != EOF)
  {
    putchar(c);
    c = getchar();
  }
}

