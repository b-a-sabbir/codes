#include <stdio.h>

int main() {
   double x1, x2, y1, y2, d, p, q;
   scanf("%lf %lf", &x1, &y1);
   scanf("%lf %lf", &x2, &y2);
   p = (x1-x2);
   q = (y1-y2);
   d = sqrt(p*p+q*q);
   printf("%.4lf\n", d);
}
