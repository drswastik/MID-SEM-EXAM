#include<stdio.h>
int main(){
    float r;
    float v,s;
    printf("Enter The Radius Of The Sphere:");
    scanf("%f",&r);
    v=((4.0*3.14*r*r*r)/3.0);
    s=(4.0*3.14*r*r);
    printf("The Volume OF The Sphere Is %.2f\n",v);
    printf("The Surface Area OF The Sphere Is %.2f",s);

    return 0;
}