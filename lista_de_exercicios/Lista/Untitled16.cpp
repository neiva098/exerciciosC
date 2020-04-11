#include<stdio.h>
void calculodetempo(int x,int y,int w, int z)
{	
	int s=0;
	int cntrlh;
	if(w<x||w==x&&z<y)
	{	
		cntrlh=24-x;
		s=(w+cntrlh)*60 + z-y;
	}else
	{
		s=(w-x)*60 + z - y;
	}
	printf("Minutos totais %d\n",s);	
}
main()
{
	int x,y,w,z;
	printf("Hora de inicio\n");
	scanf("%d:%d",&x,&y);
	printf("Hora de fim\n");
	scanf("%d:%d",&w,&z);
	calculodetempo(x,y,w,z);
}
