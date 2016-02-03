#include <stdio.h>
#include <stdlib.h>

void do_something(void){
	printf("do something for people");
};

void do_something_else(void){
	printf("do especially something to people\n");
};

int sum(int a, int b, int c){
	return a+b+c;
};

int average(int a, int b, int c){
	return sum(a,b,c)/3;
};

int main(){
	void (*fun_ptr)(void) = &do_something_else;
	fun_ptr();
	int (*cal_ptr)(int, int, int) = &average;
	int avg = cal_ptr(2,4,4);
	printf("%d",avg);
	return 0;
}