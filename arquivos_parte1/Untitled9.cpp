#include<stdio.h>
main()
{
	FILE *fp;
	int i,v[10],n;
	fp=fopen("DADOS.DAT","rb");
	n=fread(v,sizeof(int),10,fp);
	for(int i=0;i<10;i++)
	{
		printf("%d",v[i]);
	}
}
