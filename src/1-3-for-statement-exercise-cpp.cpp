/////////////////////////////////////////////////////////////
// Print Fahrenheit-Celsius table
// From 300 to 0
/////////////////////////////////////////////////////////////

#include <iostream>

int main() {
  int fahr;
  float calc;

  for (fahr = 300; fahr >= 0; fahr = fahr - 20) {
    calc = (5.0 / 9.0) * (fahr - 32);
    // printf("%3d %6.1f\n", fahr, calc);
    std::cout << fahr << "\t" << calc << std::endl;
  }

  return 0;
}
