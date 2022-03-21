#include <stdio.h>

#define NUM_ROWS 8

int main(){
	double conversionRate = 43158.47;
	printf("Enter conversion rate (1.00 BTC -> CHF):");
	scanf("%lf", &conversionRate);
	printf("\n");
	int loopVar = 200;
	for(int i = 1; i<= NUM_ROWS; i++){
		printf("%4.2d CHF   <-->   %.5lf BTC\n", loopVar*i, loopVar* i / conversionRate);
	}

	return 0;
}
