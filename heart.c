#include<stdio.h>

main()
{
	int i,j;


	for(i=1;i<=14;i++)
	{
	       for(j=1;j<=21;j++)
	       {
				if( i==1 && (j>=4 && j<=8) || 
					i==1 && (j>=14 && j<=18) ||
					i==2 && (j>=3 && j<=9) ||
					i==2 && (j>=13 && j<=19) ||
					i==3 && (j>=2 && j<=10) ||
					i==3 && (j>=12 && j<=20) ||
					i==4 ||
					
					i==5 && (j>=2 && j<=20) ||
					i==6 && (j>=3 && j<=19) ||
					i==7 && (j>=4 && j<=18) ||
					i==8 && (j>=5 && j<=17) ||
					i==9 && (j>=6 && j<=16) ||
					i==10 && (j>=7 && j<=15) ||
					i==11 && (j>=8 && j<=14) ||
					i==12 && (j>=9 && j<=13) ||
					i==13 && (j>=10 && j<=12) ||
					i==14 && (j>=11 && j<=11) )
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
