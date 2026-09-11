#include <stdio.h>
#include <math.h>
int main(){
    double F1, F2, a1, a2, a1R, a2R;
    double FRX, FRY, FR, a, aR;
    printf("Digite o modulo e angulo da forca 1: ");
    scanf("%f %lf", &F1, &a1);
    printf("Digite o modulo e a angulo da forca 2: ");
    scanf("%lf %lf", &F2, &a2);
    printf("Forca 1: modulo = %.1lf, angulo = %.1lf\n", F1, a1);
    printf("Forca 2: modulo = %.1lf, angulo = %.1lf\n", F2, a2);
    a1R = a1/180*M_PI; a2R = a2/100*M_PI;
    FRX = F1 * cos (a1R) + F2 * cos (a2R);
    FRY = F1 * sin (a1R) + F2 * sin (a2R);
    FR = sqrt (FRX*FRX + pow(FRY,2));
    aR = atan2(FRY,FRX);
    a = aR/M_PI*180;
    printf("Forca R: modulo = %.1lf, angulo = %.1lf", FR, a);

    return 0;
}
