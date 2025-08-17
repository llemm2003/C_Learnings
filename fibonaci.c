#include <stdio.h>
#include <time.h>

/* 
 * Fibonaci series:
 * 1 + 1, 1 + 2, 2 + 3, 3 + 5, 5 + 8 ...
 */

int main (void) {
	int seq_value;
	long value1, value2, value3;
	clock_t start,end;
	double cpu_time_used;
	#define MAX_VALUE 1000
	start = clock();
	value1=0;
	value2=1;
	for (seq_value=0; seq_value<=MAX_VALUE; seq_value++){
		printf ("%ld\n", value1);
		value3=value1+value2;
		value1=value2;
		value2=value3;
	}
	end = clock();
	cpu_time_used = ((double) (end-start))/CLOCKS_PER_SEC;
	printf ("Time taken: %f",cpu_time_used);
	return 0;
}



