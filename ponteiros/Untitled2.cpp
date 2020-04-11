#include<stdio.h>
#include<stdlib.h>
void deleta(char *s1,char *s2)
{	
	int j,k,i,l;
	int cntrl;
	for( i=0;s1[i]!='\0';i++)
	{	
		for( j=0,k=i;s1[k]!='\0';j++,k++)
		{	cntrl=1;
			if(s1[k]!=s2[j])
			{
				cntrl=0;
				break;
			}
		}
		if(cntrl==1)
		{
			for(l=i;s1[k]!=0;k++,l++)
			{
				s1[l]=s1[k];
			}
			s1[l]='\0';
			i--;
		}
	}
}
main()
{
	char s[20];
	gets(s);
	deleta(s,"opa");
	printf("%s",s);
}
