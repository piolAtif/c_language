#include <stdio.h>
typedef int(*map)(int);

int halve(int number){
	return number/2;
};

int increment_by_one(int number){
	return number+1;
};

void my_map(int *s,int *d,int length,map h){
	for (int i = 0; i < length; ++i)
	{
		d[i] = h(s[i]);
	}
};

int main(){
	int source[]={1,2,3};
	int dest[3];
	my_map(source,dest,3,halve);
	for (int i = 0; i < 3; ++i)
	{
		printf("%d\n",dest[i]);
	}
}