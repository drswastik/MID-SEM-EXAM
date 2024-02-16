#include<stdio.h>
int main(){
    int a,flag;
    printf("Enter A Number: ");
    scanf("%d",&a);
    int d[a-2];
    int k=2;
    for(int i=0;i<a-2,k<=a;i++){
        d[i]=k;
        k++;
    }
    for(int u=0;u<a-2;u++){
        for(int p=u+1;p<a-2;p++){
        if(d[u]+d[p]==a){
            
                int fli,fla;
                for(int s=2;s<d[u];s++){
                    if(d[u]%s==0){
                        fli=0;
                        break;
                    }
                    else{
                        fli=1;
                    }}
                for(int g=2;g<d[p];g++){
                    if(d[p]%g==0){
                        fla=0;
                        break;}
                    else{
                         
                        fla=1;
                    }
                }if((fli==1)&&(fla==1)){
                    printf("%d %d\n",d[u],d[p]);
                    flag=1;
                
                
                }
                
                
    }}}
    if (flag==0){
        printf("No Such Pairs Available")}
    return 0;}

