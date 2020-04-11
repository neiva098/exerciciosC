#include<stdio.h>
typedef struct
{
	int dia;int mes;int ano;
}data;
typedef struct 
{
	char nome[90];int id;float sal;data nasc;
}pessoa;
void mostra(pessoa x)
{
	printf("NOME  : %s\n",x.nome);
	printf("IDADE  : %d\n",x.id);
	printf("SAL  : %f\n",x.sal);
	printf("NASC  :  %d/%d/%d\n",x.nasc.dia,x.nasc.mes,x.nasc.ano);
}
main()
{
	pessoa p={"Carlos",23,1238.67,{23,6,2018}};
	mostra(p);
}
