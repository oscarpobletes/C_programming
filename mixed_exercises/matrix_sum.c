//by Óscar Poblete Sáenz
#include<stdio.h>
int main()
{
	//Matrix 1
	int i,j,matriz1[3][3],matriz2[3][3];
	printf("\tMATRIX SUM\n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("Enter value [%d,%d]: ",i+1,j+1);
			scanf("%d",&matriz1[i][j]);
		}
	}
	printf("\nMatrix 1: \n");
		for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
	printf("%d\t",matriz1[i][j]);
	    }
	printf("\n");
}
	//Matrix 2
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("\nEnter value [%d,%d]: ",i+1,j+1);
			scanf("%d",&matriz2[i][j]);
		}
	}
	printf("\nMatrix 2: \n");
		for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
	printf("%d\t",matriz2[i][j]);
	    }
	printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++) matriz1[i][j]=matriz1[i][j]+matriz2[i][j]; /*The result is being saved on matrix 1*/
    }
    printf("\n\nThe sum of matrix is:\n\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++) printf("%d\t",matriz1[i][j]);
        printf("\n");
    }
}


