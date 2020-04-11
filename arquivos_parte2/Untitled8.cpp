#include<stdio.h>
FILE *arqv;
 main()
{
	arqv=fopen("arqv.txt","w");
	float v[10];
	for(int j=0;j<10;j++)
	{
		scanf("%f",&v[j]);
		fprintf(arqv,"%f ",v[j]);	
	}
	float o;
	int w,i=0;
	scanf("%d",&w);
	fclose(arqv);
	arqv=fopen("arqv.txt","r");
	while((fscanf(arqv,"%f",&o))!=EOF)
	{	i++;
		if(w==i||i==1||i==10)
		{
			printf("*%f*\n",o);
		}
	}
	arqv=fopen("arqv.txt","w");
}
