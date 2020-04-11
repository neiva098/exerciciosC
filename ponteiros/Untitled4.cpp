#include<stdio.h>
#include<stdlib.h>
char* endereco(char *s,char ch) //ultimo endereco da string
{	
	char *c=NULL;
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]==ch)
		{
			c=&s[i];return c;
		}
	}
	return c;
	
}
char* endereco1(char *s1,char *s2)
{
	char *c=NULL;
	int cntrl=0;
	int k;
	for(int i=0;s1[i]!='\0';i++)
	{
			for(int j=0, k=i;s2[j]!='\0';j++,k++)
			{
				if(s1[k]==s2[j])
				{
					cntrl=1;
				}
				else
				{
					cntrl=0;
					break;
				}
			}
			if(cntrl==1)
			{
				c=&s1[i];
				return c;
			}
	}
	return c;	
}
main()
{
	char s[20];
	char s2[20];
	gets(s);
	gets(s2);
	printf("%p \n",s);
	printf("  %p  \n",endereco(s,'b'));
	printf("   %p  \n",endereco1(s,s2));
}
