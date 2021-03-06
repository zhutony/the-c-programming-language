/////////////////////////////////////////////////////////////
// Print Celsius-Fahrenheit table
// For fahr = 0, 20, ..., 300; floating-point version
/////////////////////////////////////////////////////////////

#include <stdio.h>

int main(void) {
  printf(
      "\n/////////////////////////////////////////////////////////////\n"
      "// This program prints Celsius to Fahrenheit conversion table\n"
      "/////////////////////////////////////////////////////////////\n\n");

  float celsius, fahr;
  int lower, upper, step;

  lower = 0;    // lower limit of temperature scale
  upper = 300;  // upper limit
  step = 20;    // step size

  celsius = lower;
  while (celsius <= upper) {
    fahr = celsius * (9.0 / 5.0) + 32;
    printf("%3.0f °C\t %5.1f °F\n", celsius, fahr);
    celsius = celsius + step;
  }

  return 0;
}
