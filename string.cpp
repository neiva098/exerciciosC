#include <stdio.h>
int tamanho(char string[])
{
	int i;
	for (i = 0; string[i] != '\0'; i++)
		;
	return i;
}
void concatenar(char string1[], char string2[])
{
	int a = tamanho(string1);
	;
	int i;
	for (i = 0; string2[i] != '\0'; i++, a++)
	{
		string1[a] = string2[i];
	}
	string1[a] = '\0';
	printf("%s\n", string1);
}
void copia(char s1[], char s2[])
{
	int i = 0;
	for (i = 0; s1[i] != '\0'; i++)
	{
		s2[i] = s1[i];
	}
	s2[i] = '\0';
}
void copiaparam(char s1[], char s2[], int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		s2[i] = s1[i];
	}
	s2[i] = '\0';
}
int compara(char s1[], char s2[])
{
	int i;
	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return 0;
		}
	}
	return 1;
}
main()
{
	int n = 2;
	char string1[50];
	char string2[50];
	char string3[50];
	char string4[50];
	gets(string1);
	gets(string2);
	printf("V OU F %d\n", compara(string1, string2));
	copia(string1, string3);
	copiaparam(string1, string4, n);
	printf("%d\n", tamanho(string1));
	printf("COPIA  %s\n", string3);
	printf("COPIA2 %s\n", string4);
	concatenar(string1, string2);
}
