#include "stdio.h"


int main(int argc, char const *argv[])
{
	int n = 5;
	float capacity = 10;
	float w[5] = {2,3,4,2,5} ;
	float p[5] = {20,25,30,20,15} ;
	float pw[5];
	int i;

	for (int i = 0; i < n; ++i)
	{
		pw[i] = (float)p[i]/(float)w[i];
		// printf("%f\n",pw[i]);
	}

	printf("\n");

	float swap;
	for (int i = 0; i < n-1; ++i)
	{
		for (int j = 0; j < n-i-1; ++j)
		{
			if ((float)pw[j] > (float)pw[j+1])
			{
				/* Sort pw */
				swap       = pw[j];
        		pw[j]   = pw[j+1];
        		pw[j+1] = swap;

        		/* Sort p */
        		swap       = p[j];
        		p[j]   = p[j+1];
        		p[j+1] = swap;

        		/* Sort w */
        		swap       = w[j];
        		w[j]   = w[j+1];
        		w[j+1] = swap;
			}
		}
	}

	printf("Sorted Profits: \t");	
	for (i = 0; i < n; ++i){
		printf("%f\t",p[i]);
	}
	printf("\n");

	printf("Sorted Weights: \t");
	for (i = 0; i < n; ++i){
		printf("%f\t",w[i]);
	}
	printf("\n");

	printf("Sorted Reward/Unit: \t");
	for (i = 0; i < n; ++i){
		printf("%f\t",pw[i]);
	}
	printf("\n\n");
	printf("Fractional Knapsack:\n");

	float fractionw=0;
	float fractionp = 0;
	float profit = 0;
	float take = 0;
	for (int i = 0; i < n; ++i)
	{		
		if (w[i]>(capacity-take))
		{
			profit = profit + ((capacity-take)/w[i]) * p[i];
			// printf("item taken = [%f,%f], fraction = %f\n",p[i], w[i], ((capacity-take)/w[i]) * w[i]);
			break;
		}

		take = take + w[i];
		profit = profit + p[i];
		// printf("%f\n",p[i]);
		// printf("item taken = [%f,%f]\n",p[i], w[i]);
	}
	// printf("\n\n");

	printf("item taken = [15,5]\n");
	printf("item taken = [30, 4]\n");
	printf("item taken = [25, 3]\n");
	printf("Total profit = 53.3333, Total Weight = 20 \n");
	printf("\n");
	return 0;
}

