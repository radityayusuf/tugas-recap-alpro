#include <stdio.h>

int main (){
    int jarak, waktu, kecepatan ;

    scanf("%d %d", &jarak, &waktu);
    scanf("%d %d", &kecepatan, &waktu);
    scanf("%d %d", &jarak, &kecepatan);

    float v = (float) jarak / waktu ;
    float s = (float) kecepatan * waktu ;
    float t = (float) jarak / waktu ;

    printf("velocity: %.2f m/s\n", v) ;
    printf("space: %2.f m\n", s);
    printf("time: %2.f s\n", t);

    return 0 ;
}