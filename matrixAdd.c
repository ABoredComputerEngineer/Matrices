#include <stdio.h>
#include "matrixIO.h"

void matAdd(matrix,matrix,int,int,matrix);

void main(){
	matrix matA, matB, matC;
	int rowA,colA;
	int rowB,colB;
	int i,j;
	printf("Enter dimension for matrix A:::: \n");
	scanf("%d%d",&rowA,&colA);
	printf("\n");

	printf("Enter dimension for matrix B:::: \n");
	scanf("%d%d",&rowB,&colB);
	printf("\n");
	printf("Enter matrix A:: \n");
	matIn(matA,rowA,colA);
	printf("Enter matrix B:: \n");
	matIn(matB,rowB,colB);

	printf("\n");

	printf("the matrix A:::::::\n");
	matOut(matA,rowA,colA);
	printf("The matrix B:::::::\n");

	matOut(matB,rowB,colB);

	printf("\n");

	if ( rowA==rowB && colA==colB )
		matAdd(matA,matB,rowA,colA,matC);
	else 
		printf("The dimensions of the matrix do not match for addition");


	printf("The sum of the two matrices is :::; \n");
	matOut(matC,rowA,colA);
}


void matAdd(matrix a,matrix b,int row, int col,matrix sum){
	int i,j;
	for ( i = 0; i<row; i++)
			for( j = 0; j<col;j++)
				sum[i][j] = a[i][j]+b[i][j];
}