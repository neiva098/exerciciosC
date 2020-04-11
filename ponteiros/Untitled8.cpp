#include<stdio.h>
#include<stdlib.h>
void deleta(char *v)
{
	for(int i=0;v[i]!='\0';i++)
	{
		if(v[i]>=65&&v[i]<=90)
		{
			for(int j=i;v[j]!='\0';j++)
			{
				v[j]=v[j+1];
			}
			i--;
		}
	}
}
main ()
{
	char o[20];
	gets(o);
	deleta(o);
	printf("%s",o);
}
