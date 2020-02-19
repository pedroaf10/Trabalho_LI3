#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>

//fgets char buf[8]; fgets(buf,8,file); se chegar ao final do ficheiro ou encontrar um erro (linha maior que o buffer)

int getClientes (int argc, char const *argv[]){

	char buffer[64];
	char *clientes[20000];
	int clientes_len = 0, i;
	FILE *f = fopen("DadosIniciais/Clientes.txt","r");
	if(f==NULL){
		printf("Ficheiro não existe\n");
		return -1;
	}
	while(fgets(buffer,64,f)){
		clientes[clientes_len++] = strtok(strdup (buffer), (" /r/n"));
	}
	for(i = 0; i < clientes_len; i++){
		printf("%s",clientes[i]);
		}
	return 0;
}

int verifca_cliente (char* cliente) {
	return strlen(cliente) == 5 
    && isupper (cliente[0]) 
    && isdigit (cliente[1]) 
    && isdigit (cliente[2]) 
    && isdigit (cliente[3]) 
    && isdigit (cliente[4]);
}

int verifica_produto (char* produto) {
	return strlen(produto) == 6
	 && isupper (produto[0])
	 && isupper (produto[1])
	 && isdigit (produto[2])
	 && isdigit (produto[3]) 
	 && isdigit (produto[4]) 
	 && isdigit (produto[5]);
}


//falta a função que verifica se a priemira letra e char e outras digitos 
//separar strings/linhas clientes strtok strsep
//copiar string de uma string para outra strdup que faz basicamente o mesmo que malloc ao mesmo tempo que o strcpy

int main (){
	char str[6];
	str = "12345";
	sleep[5];
	return 0;
}