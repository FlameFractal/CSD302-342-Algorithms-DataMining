#include "stdio.h"
#include "math.h"
#include <time.h>

int main(int argc, char const *argv[])
{
	/* declaration of variables */
	int arr[3]={0}, numarr[6]={0}, size=3, i, j, sample=1000;
	
	/* generate n sample values */
	for (j = 0; j < sample; ++j)
	{	
		int num=0;

		/* flipping a 2-sided coin 3 times*/
		for (i = 0; i < size; ++i){
			arr[i] = rand()%2;
		}
		
		/* converting binary number to decimal*/
		for (i = 0; i < size; ++i){
			num+=arr[i]*pow(2,i);
		}
		
		/* discarding if 0 or 7 */
		if(num == 0 || num == 7){
			j--;
		} else { /* updating count of the number generated by simulated toss */
			numarr[num-1] += 1;	
		}
	}

	/* calculating probabilities of each number 0 to 6 */
	for (i = 0; i < 6; ++i)
	{
		printf("%lf\n", (float) numarr[i]/sample);
	}

	return 0;
}



