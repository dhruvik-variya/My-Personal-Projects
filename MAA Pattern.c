#include<stdio.h>

main()
{
	int i,j;
	
	for(i=1;i<=20;i++)
	{
		for(j=1;j<=50;j++)
		{
			if( (i==2 && j==14) || 
			    (j==11&& (i>=1 && i<=3)) ||
			    (i==4 && (j>=12 && j<=16)) ||
				(j==17&& i>=1 && i<=3) || 
				(i==6 && (j>=1 && j<=19)) ||
				(i==7 && (j>=1 && j<=19)) || 
				(j==6 && (i>=8 && i<=15)) ||
				(j==7 && (i>=8 && i<=15)) || 
				(j==4 && (i>=12 && i<=15)) || 
				(j==5 && (i>=12 && i<=15)) || 
				(j==12 && (i>=8 && i<=19)) ||
				(j==13 && (i>=8 && i<=19)) ||
				(j==15 && (i>=8 && i<=19)) ||
				(j==16 && (i>=8 && i<=19)) ||
				(i==12 && (j>=8 && j<=11)) ||
				(i==13 && (j>=8 && j<=11)) ||
				 
//				 heart

		     	(i==6 && (j>=25 && j<=29)) || 
				(i==6 && (j>=35 && j<=39)) ||
				(i==7 && (j>=24 && j<=30)) ||
				(i==7 && (j>=34 && j<=40) )||
			    (i==8 && (j>=23 && j<=31)) ||
				(i==8 && (j>=33 && j<=41)) ||
				(i==9 && (j>=22 && j<=42)) ||
				(i==10 && (j>=23 && j<=41)) ||
				(i==11 && (j>=24 && j<=40)) ||
				(i==12 && (j>=25 && j<=39)) ||
				(i==13 && (j>=26 && j<=38)) ||
				(i==14 && (j>=27&& j<=37)) ||
				(i==15 && (j>=28 && j<=36)) ||
				(i==16 && (j>=29 && j<=35)) ||
				(i==17 && (j>=30 && j<=34)) ||
				(i==18 && (j>=31 && j<=33)) ||
				(i==19 && (j>=32 && j<=32)) 
			)   
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	
	
}
