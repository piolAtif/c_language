#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char *s = "hello world";
	*s = 'H';
	// char *str;
	// char str_char[21];
	// str = (char *)malloc(0);
	// str = &str_char;
	// strcpy(str_char,"tutorialspoint");

	// printf("String = %s and Address is = %p\n",str,str);

	// // str = (char *)realloc(str,20);
	// printf("%lu\n",strlen(str));

	// strcat(str,".comiscandefrturghjivrdjbghgfdjfbbdjbebjrbgreberbrieubviuerbvieurbcdsvdfbvfgbfgdnbjkfgbnjkfhbkfjbh vufgbbvgjfgjregfurgfurgfugerubegriuegefbergfuiergfuregfiurgfeiuryvweoirywevlrewilrvweiurvewiuriewurgwevrgevfgferus");
	// printf("%lu\n",strlen(str)); 
	// printf("String = %s and Address is = %p\n",str,str);
	// free(str);
	// int *a;
	// a = (int *)realloc(str,4);
	// *a = 1000;
	// // int *ptr = a;
	// printf("Number = %d and Address is = %u\n",*a,a);
	return 0;
}