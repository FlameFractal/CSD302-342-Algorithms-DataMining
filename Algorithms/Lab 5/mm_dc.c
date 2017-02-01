#include "stdio.h"

int main(int argc, char const *argv[]){
	int a[2][2] = {{1,2},{3,4}};
	printSquareMatrix(a,2);
	
	int i,j;
	for (i = 0; i < n/2; ++i)
	{
		/* code */
	}

	return 0;
}


void divideAndConquer(int[][2] matrixA, int[][2] matrixB){
    if (matrixA.length == 2){
         //calculate and return base case
    }
    else {
        //make a11, b11, a12, b12 etc. by dividing a and b into quarters      
        int[][] c11 = addMatrix(divideAndConquer(a11,b11),divideAndConquer(a12,b21));
        int[][] c12 = addMatrix(divideAndConquer(a11,b12),divideAndConquer(a12,b22));
        int[][] c21 = addMatrix(divideAndConquer(a21,b11),divideAndConquer(a22,b21));
        int[][] c22 = addMatrix(divideAndConquer(a21,b12),divideAndConquer(a22,b22));
        //combine result quarters into one result matrix and return
    }
}


printSquareMatrix(int a[][2], int n){
	int i,j;
	for (i = 0; i < n; ++i){
		for (j = 0; j < n; ++j)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n\n");
	}
}