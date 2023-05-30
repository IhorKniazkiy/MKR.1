#include <stdio.h>
#include <math.h>
int main() {
    double gipotenuza, katet1, katet2, area;
    printf("Введіть значення гіпотенузи: ");
    scanf("%lf", &gipotenuza);
    printf("Введіть значення одного з катетів: ");
    scanf("%lf", &katet1);
    katet2 = sqrt(gipotenuza * gipotenuza - katet1 * katet1);
    area = 0.5 * katet1 * katet2;
    printf("Другий катет: %.2lf\n", katet2);
    printf("Площа трикутника: %.2lf\n", area);
    return 0;
}