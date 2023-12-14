#include "my_math.h"

int main(void)
{
int a, b, c;
a = 20;
b = 5;

printf("%d + %d = %d\n", a, b, add(a, b));
printf("%d - %d = %d\n", a, b, sub(a, b));
printf("%d x %d = %d\n", a, b, mul(a, b));
printf("%d / %d = %d\n", a, b, div(a, b));
printf("%d %% %d = %d\n", a, b, mod(a, b));
return (0);
}
