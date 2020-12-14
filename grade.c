#include <stdio.h>

int main(void){
	int i = 0;
	printf("Enter score : ");
	scanf("%d", &i);
	if(i < 101 && i >= 80){
		printf("Grade 4");
	}
	if(i < 80 && i >= 70){
		printf("Grade 3");
    }
    if(i < 70 && i >= 60){
		printf("Grade 2");
    }
    if(i < 60 && i >= 50){
		printf("Grade 1");
    }
    if(i < 50){
		printf("Grade 0");
    }
    return 0;
}

