#include<stdio.h>
float score[20] = {};
int n = 0;

float avg();
float max();
float min();

int main(void){
	int i;
	scanf ("%d", &n);
	printf("Total number of student = %d\n" , n);
	for(i =0; i < n; i++){
		scanf("&d\n", &score[i]);
	}
	printf("Average = %.2f", avg());
	printf("max = %.2f", max());
	printf("min = %.2f", min());
	return 0;
}

float max(){
	float max_v = 0.0;
	int i;
	max_v = score[0];
	for(i = 1; i < n; i++){
		if(max_v = score[i]){
			max_v = score[i];
		}
	}
	return max_v;

}

float min(){
	float min_v = 0.0;
	int i;
	min_v = score[0];
	for(i = 1; i < n; i++){
		if(min_v = score[i]){
			min_v = score[i];
		}
	}
	return min_v;
}

float avg(){
	float average = 0.0;
	float sum = 0.0;
	int i;
	for(i = 0; i < n; i++){
		sum = sum + score[i];
	}
}
