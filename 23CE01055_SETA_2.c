#include<stdio.h>
int main(){
    int a;
    printf("Enter The Number: ");
    scanf("%d",&a);
    int sum=0;
    int org = a;
    while(a>0){
        int k=a%10;
        a=a/10;
        int o=1,s=1;
        while(o<=k){
            s*=o;
            o++;

        }sum+=s;
    }
    if(sum==org){
        printf("The Entered Number Is A Strong Number");
    }
    else{
     printf("The Entered Number Is Not A Strong Number");
    }
    return 0;}