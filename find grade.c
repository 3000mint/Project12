#include <stdio.h>

int main(void){
	int size, n, i = 0;
	float score[30] = {};
	scanf("%d", &n);
	size = n;
	while (size > 0){
		scanf("%f", &score[i]);
		--size;
		i++;
	}
	for(i = 0; i < n; i++){
		printf("%f\n", score[i]);
	}
	
	return 0;
}
