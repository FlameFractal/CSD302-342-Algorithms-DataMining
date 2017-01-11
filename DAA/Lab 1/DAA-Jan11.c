#include <stdio.h>
#include "stdlib.h"
#include "time.h"

// int main(int argc, char const *argv[])
// {
// 	for (int i = 1; i <= 1000; ++i)
// 	{
// 		for (int j = 1; j <= 1000; ++j)
// 		{
// 			printf("%d\n",i);
// 		}
// 	}
// 	return 0;
// }

// int main(int argc, char const *argv[])
// {
// 	for (int i = 1000; i >= 1; --i)
// 	{
// 		for (int j = 1000; j >= 1; --j)
// 		{
// 			printf("%d\n",i);
// 		}
// 	}
// 	return 0;
// }

// int main(int argc, char const *argv[])
// {
// 	srand(time(NULL));
// 	for (int i = 1; i <= 1000000; ++i)
// 	{
// 		printf("%d\n",(rand()%1000));
// 	}
// 	return 0;
// }

// int main(int argc, char const *argv[])
// {
// 	srand(time(NULL));
// 	long int r = (1000000000 + 1 - 1000000) + 1000000;
// 	for (int i = 1; i <= 1000000; ++i)
// 	{
// 		printf("%ld\n",(rand()%r));
// 	}
// 	return 0;
// }





int main(int argc, char const *argv[])
{	

	for (int i = 0; i < 100; ++i)
	{
		int ra;
		int arr[1000000];
		FILE *fp = fopen("1.txt", "r");
		
		ra=1000;
		// scanf("%d", &ra);

		for (int i = 0; i < 1000000; ++i)
		{
			fscanf(fp, "%d", &arr[i]);
			if(arr[i]==ra){
				printf("Found at index %d\n",i);
				break;
			}
		}

		fclose(fp);
		
	}
	printf("Average Time taken = %lf\n", (double)(clock()/CLOCKS_PER_SEC)/1000);

	return 0;
}