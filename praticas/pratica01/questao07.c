#include <stdio.h>
#include <math.h>

int main() {  
  // ax² + bx + c

  int coeficiente_a = -1;
  int coeficiente_b = 2;
  int coeficiente_c = 3;

  // b² - 4ac

double delta = pow(coeficiente_b, 2) -4 * coeficiente_a * coeficiente_b * coeficiente_c;

  // x1 = -b + raiz(delta) / 2a

  double raiz_x1 = (-coeficiente_b + sqrt(delta))/ 2 * coeficiente_a;
  double raiz_x2 = (-coeficiente_b - sqrt(delta))/ 2 * coeficiente_a;

  printf("As raizes da equacao %dx² %dx %d sao x1 = %f e x2 %f\n", coeficiente_a, coeficiente_b, coeficiente_c, raiz_x1, raiz_x2);

  return 0;

}
  