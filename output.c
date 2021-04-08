#include "score.h"


void output_results(int m[], int st[],int sc[]) {
	int i;
	printf("Here are the marks:\n");
	for (i = 0; i < MAX && m[i] != -1; i++) {
		printf("%6d",sc[i]);
	}
	printf("\n");
	for (i = 0; i < MAX && m[i] != -1; i++) {
		printf("%6d", m[i]);
	}

		

		puts(" ");
		printf("Here are the statistics:\n");
		for (i = 0; i < 6; i++) {
			printf("Mark %d: %d hits\n", i, st[i]);
		}
	}


/*for (int i = a, c = 0; i <= b; i++) {
		if (i % 3 == 0) {
			printf("%6d", i);
			c++;
			if (c % 10 == 0) printf("\n");
		}
	}*/