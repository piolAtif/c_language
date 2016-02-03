#include <stdio.h>
#include <stdlib.h>

int main(){
	int *matrix[3];
	matrix[0] = (int *)calloc(3,sizeof(int));
	matrix[1] = (int *)calloc(3,sizeof(int));
	matrix[2] = (int *)calloc(3,sizeof(int));

	matrix[0][0] = 1;
	matrix[1][1] = 1;
	matrix[2][2] = 1;
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			printf("%d",matrix[i][j]);
		}
		printf("\n");
	}


	return 0;
};