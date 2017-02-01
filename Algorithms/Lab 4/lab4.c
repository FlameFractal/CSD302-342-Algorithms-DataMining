/*
Vishal Gauba
1410110501

Lab - 4, Algorithms

Feb 1, 2017
*/

#include "stdio.h"

int** multiply(int a[][2], int b[][2], int c[][2]){
	int a11 = a[0][0];
	int a12 = a[0][1];
	int a21 = a[1][0];
	int a22 = a[1][1];
	int b11 = b[0][0];
	int b12 = b[0][1];
	int b21 = b[1][0];
	int b22 = b[1][1];
	
	int m1 = (a11 + a22)*(b11 + b22);
	int m2 = (a21 + a22)*(b11);
	int m3 = (a11)*(b12 - b22);
	int m4 = (a22)*(b21 - b11);
	int m5 = (a11 + a12)*(b22);
	int m6 = (a21 - a11)*(b11 + b12);
	int m7 = (a12 - a22)*(b21 + b22);

	c[0][0] = m1 + m4 - m5 + m7; /* c11 */
	c[0][1] = m3 + m5; /* c12 */
	c[1][0] = m2 + m4; /* c21 */
	c[1][1] = m1 - m2 + m3 + m6; /* c22 */
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

int main(int argc, char const *argv[])
{
	int a[2][2] = {{1,2}, {3,4}};
	int b[2][2] = {{1,2}, {3,4}};
	int c[2][2];
	multiply(a,b,c);

	printf("Matrix 1:\n");
	printSquareMatrix(a,2);
	printf("Matrix 2:\n");
	printSquareMatrix(b,2);
	printf("Matrix 1 * Matrix 2:\n");
	printSquareMatrix(c,2);

	return 0;
}