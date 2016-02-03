#include <stdio.h>

int main(int argc, char const *argv[]){
	if(argc == 2)
		printf("This is a server %s",argv[1]);
	else if(argc>2)
		printf("Hello world! my name is %s\n",argv[2]);
	else
		printf("Sorry! type some text\n");
	return 0;

