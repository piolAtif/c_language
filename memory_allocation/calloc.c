#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char *name;
	int *score;
}student;

int main(){
	int a[4] = {1,2,3,6};
	int *scores = (int *)calloc(4,sizeof(int));
	scores = a;
	for(int i = 0;i<4;i++){
		printf("%d",scores[i]);
	};

	int *ptr = (int *)calloc(4,sizeof(int));
	int score_point[4];
	ptr = score_point;

	student stu;
	stu.name = "string";
	stu.score = ptr;

	printf("%s\n",stu.name);

	for (int i = 0; i < 4; ++i)
	{
		printf("%d",stu.score[i]);
	}

	return 0;
}