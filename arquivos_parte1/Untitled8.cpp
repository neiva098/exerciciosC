#include<stdio.h>
main()
{
	FILE *fp;
	int i,v[10];
	for(int i=0;i<10;i++)
	{
		scanf("%d",&v[i]);
	}
	fp=fopen("DADOS.DAT","wb");
	if(fwrite(v,sizeof(int),10,fp)!=10)
	fprintf(stderr,"");
}
