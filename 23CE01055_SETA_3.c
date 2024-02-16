#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    printf("Enter the value of c:");
    scanf("%d",&c);
    int i=(b*b-4*a*c);
    if(i>=0){
        float f,g;
        f=((-b)+sqrt(i))/(2*a);
        g=((-b)-sqrt(i))/(2*a);
        printf("The Roots Of The Equation Are: %f,%f",f,g);}
    else{
        printf("Imaginary Roots");
    }
return 0;
    }

