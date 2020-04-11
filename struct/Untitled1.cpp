#include<stdio.h>
typedef struct 
{
	char mes[90];
	int ano;
	int dia;
} DATA;
struct PESSOA
{
	int idade;
	char sexo;
	char nome[60];
	float salario;
	DATA nas;
}typedef p;
main()
{
	p v= {18,'M',"jao",1200,{"junho",2017,20}};
	printf("%d",v.nas.ano);
}
