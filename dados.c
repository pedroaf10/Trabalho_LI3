#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>

//fgets char buf[8]; fgets(buf,8,file); se chegar ao final do ficheiro ou encontrar um erro (linha maior que o buffer)

int dados (int argc, char const *argv[]){

	char buffer[64];
	char *clientes[20000];
	int clientes_len = 0, i;
	FILE *f = fopen("DadosIniciais/Clientes.txt","r");
	if(f==NULL){
		printf("Ficheiro não existe\n");
		return -1;
	}
	while(fgets(buffer,64,f)){
		clientes[clientes_len++] = strtok(strdup (buffer), (" /r/n"));}
		for(i = 0; i < clientes_len; i++){
			printf("%s",clientes[i]);
		}
	return 0;
}

//falta a função que verifica se a priemira letra e char e outras digitos 
//separar strings/linhas clientes strtok strsep
//copiar string de uma string para outra strdup que faz basicamente o mesmo que malloc ao mesmo tempo que o strcpy

int main (){
	//SendMessage(0, 0, 0, 2);
	sleep(5);
	//SendMessage(0, 0, 0, -1);
	return 0;
}