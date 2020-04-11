#include <stdio.h>
int main(void) {
 FILE *ent, *sai;
 int matr, quant, i;
 float dur, somadur, somatudo;
 ent = fopen("18.txt","r"); 
 sai = fopen("19.txt","w");
 somatudo = 0;
 while (fscanf(ent,"%d %d",&matr,&quant)==2) 
 {
 	if (quant>0) 
	 { 
 		somadur = 0;
 		fprintf(sai,"%d",matr);
 			for (i=0; i<quant; i++) 
			 { 
 				fscanf(ent,"%f",&dur); 
 				somadur = dur+somadur; 
 			}
 		fprintf(sai," %.1f\n",somadur); 
 		somatudo =somatudo+ somadur; 
 	}		
 }
 fprintf(sai,"%.1f\n",somatudo); 
}
