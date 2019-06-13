#include <stdio.h>
#include <math.h>

void main(){
	int num;
	int total=0;
	int cont; 
	int qnt=0;
	int d=0;
	int var=0;
	float m;
	float dp=0;
	
		do{
	printf("informe um numero:");
	scanf("%d",&num);
	printf("adicionar outro numero? \n SIM =1, NÃO = 0:\n\n");
	scanf("%d",&cont);
	qnt++;
	total=total+num;
}while(cont==1);
	m = total/qnt;
	var=var+d*d/qnt-1;
	dp = sqrt(var);
	
	printf("total=%d",total);
	printf("o valor da media é=%f\n e o desvio padrão é=%f\n",m,dp);
	
	
}
