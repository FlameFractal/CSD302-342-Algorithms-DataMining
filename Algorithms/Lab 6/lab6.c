#include <stdio.h>
#include "stdlib.h"
#include "time.h"

int max_capacity=10;
int max_diff=20;

int* generate_stations(int m, int n, int c, int ab_dist)
{	
	srand(time(NULL));

	int remaining = ab_dist;
	int station_no = 1;
	int stations[8];

	stations[0]=0;

	while(station_no < 7){
		int Min = remaining/(n-station_no);
		int Max = 20;

		int diff = Max-Min;
	    int d = (int) (((double)(diff+1)/RAND_MAX) * rand() + Min);

		// int d = (int)(((randmax-randmin+1)*((double)rand()/RAND_MAX)) + randmin);
		// printf("%d\n",Min);
		stations[station_no] = d;
		station_no++;
		remaining -= d;
	}

	int i;
	for (i = 0; i < 8; ++i)
	{
		// printf("%d\n",stations[i]);
	}
	return stations;
}

int main(){

	/* test case */
	int station_list[]={0,20,11,18,8,7,15,12,9};
	/* variables */
	int ab_dist = 100;
	int m = 20;
	int n = 8;
	int c = 10;


		
	/* station generation algorithm*/
	int* staton_list = generate_stations(ab_dist,m,n,c);

	int dist_travelled=0;
	int station_id=1;
	float present_petrol=10.0;
	float petrol_fill=10.0;
	float a,b; int sum;
	while(dist_travelled<100){
		if(present_petrol*2<(float)(station_list[station_id])){
			
			a = (float)(station_list[station_id] - (present_petrol*2));
			printf("Time to fill = %f \n",(float)a/2);
			petrol_fill += (float)a/2;
		}
		present_petrol=0;
		if(dist_travelled<100){
			dist_travelled=dist_travelled+station_list[station_id];
		}
		station_id++;
		
	}

printf("Time taken = %f \n",petrol_fill);
printf("Distance travelled = %d \n",dist_travelled);
return 0;
}