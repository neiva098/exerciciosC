#include<stdio.h>
#include<stdlib.h>
char *vogais(char *s)
{
	char vogais[]={'a','e','i','o','u'};
	char *ptr;
	int cntrl=0;
	for(int i=0;s[i]!='\0';i++)
	{
		for(int j=0;vogais[j]!='\0';j++)
		{
			if(s[i]==vogais[j])
			{
				return &s[i];
				break;
			}
		}
	}
	return NULL;
}
main()
{
	char s[20];
	gets(s);
	printf("%p",vogais(s));
}

