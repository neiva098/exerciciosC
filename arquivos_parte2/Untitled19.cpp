#include<stdio.h>
#include<stdlib.h>
#include<string.h>
FILE *fin;
main()
{
	fin=fopen("18.txt","r");
	char v[100];int w=0;
	while((v[w]=fgetc(fin))!=EOF)
	{
		w++;
	}
	printf("\n%s",v);
	char p [50];
	gets(p);
	int d,cntrl,j;
	for(int i=0;v[i]!='\0';i++)
	{	
	
		cntrl=1;
		for( j=0,d=i;p[j]!='\0';j++,d++)
		{
			if(p[j]!=v[d])
			{
				cntrl=0;
				break;
			}
		}
		if(cntrl==1)
		{
			for(w=i;v[d]!='\0';d++,w++)
			{
				v[w]=v[d];
			}v[w]='\0';
		}
	}
	fclose(fin);
	fin=fopen("18.txt","w");
	fprintf(fin,"%s",v);
}
