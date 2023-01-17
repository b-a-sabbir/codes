#include <stdio.h>

main()
{
   int t, s, dis;
   double fuel;
   scanf("%d %d", &t, &s);
   dis = s*t;
   fuel = dis/12.0;
   printf("%.3lf", fuel);
}
