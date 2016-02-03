#include <stdio.h>

int main(int argc, char const *argv[]){
	if(argc == 2)
		printf("pagalo apna kam karo %s",argv[1]);
	else if(argc>2)
		printf("hamara neta kon hai%s\n",argv[2]);
	else
		printf("baki bathein peene bad\n");
	return 0;

