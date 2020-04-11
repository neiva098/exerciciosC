#include<stdio.h>
int tamanho(char string [])
{	
	int i;
	for(i=0;string[i] !='\0';i++);
	return i;
}
void sobrenome(char s[])
{	
	
	int i;
	int cont=0;
	for(i=tamanho(s)-1;s[i]!='\ ';i--,cont++);
	char s2[cont+1];
	int j=cont;
	for(i=tamanho(s);s[i]!='\ ';i--,j--)
	{
		s2[j]=s[i];
	}
	printf("SOBRENOME %s\n ",s2);
}
void elimina(char v[],char ch)
{
	int i;
	int j;
	for(i=0;v[i]!=0;i++)
	{
		if(v[i]==ch)
		{	
			j=i;
			if(v[i+1]==0)
			{
				v[i]='\0';
			}
			while(v[j]!='\0')
			{
				v[j]=v[j+1];
				j++;
			}
		}
	}
	printf("%s\n",v);
}
void ordem(char v[])
{
	int i;
	int j;
	char aux;
	for(i=0;v[i]!='\0';i++)
	{
		for(j=i+1;v[j]!='\0';j++)
		{
			if(v[j]<v[i])
			{
				aux=v[i];
				v[i]=v[j];
				v[j]=aux;
			}
			
		}
	}
	printf("%s\n",v);
}
main()
{
	char s[20];
	gets(s);
	sobrenome(s);
	ordem(s);
	
	char ch ='a';
	
	elimina(s,ch);
}
