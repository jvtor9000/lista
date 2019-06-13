#include <stdio.h>
void main(){
int x;
int y;

printf("digite um valor para x:\n");
scanf("%d",&y);

printf("informe o valor para y:\n");
scanf("%d",&y);

if(x>0 && y>0){
printf("o quadrante é 1\n");
}
if(x<0 && y>0){
printf("o quadrante é 2\n");
}
if(x<0 && y<0){
printf("o quadrante é 3\n");
}
if(x>0 && y<0){
printf("o quadrante é 4\n");
}
else{
printf("esta na origem\n");
}
}
