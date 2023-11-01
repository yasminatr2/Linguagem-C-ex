#include <stdio.h>

int main(){
    int i;
    int x;
    for(i=1;i<=20;i++){
        printf("\ndigite qualquer numero entre: 1 a 6:");
        scanf("%d",&x);
        if(x==1){
            printf("*\n* ");
        }else if(x==2){
            printf("*\n***\n*\n*");
        }else if(x==3){
            printf("*\n***\n******\n*\n*\n*");
        }else if(x==6){
            printf("*\n***\n******\n********\n*********\n***********\n*\n*\n*\n*\n*\n*\n*");
        }
}
return 0;
}
    