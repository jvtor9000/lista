#include <stdio.h>
#include <string.h>
void main (){
char a[100];
printf("informe uma string:\n");
fgets(a,100,stdin);

for(int i=0;i<strlen(a);i++){
printf("%c",a[i]);
for(int i=strlen(a)-1;i>=0;i--){
	printf("%c",a[i]);
}}}
