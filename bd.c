/* birth-deaths simulation */

#include <stdlib.h>
#include <stdio.h>

#define MAXTIME 1000
#define PRNTTIME 10

int main(void)
{
	int tt, event, n;
	int seed;
	double alpha, beta;

	alpha = beta = 0.1;
	n = 10

	seed = 1456739853;
	srand48(seed);
	printf(" time    popln\n");
	for ( ttt = 0; ttt < MAXTIME ; ttt++ )
	{
		event = 0;

		if ( drand48() < alpha ) event = 1;
		if ( drand48() < beta ) event = event - 1;

		n += event;

		if ( n < 0 ) n = 0;

		if ( ttt % PRNTTIME == 0 )
			printf(" %3d    %-4d\n", ttt, n );

	}

	return (0);
	
}