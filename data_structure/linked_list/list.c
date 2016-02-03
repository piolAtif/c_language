#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void initiliaze(List *list_of_elements){
	list_of_elements->first = list_of_elements->last = NULL;
	list_of_elements->length = 0;
};

void enqueue(List *list_of_elements, int num){
	Elements *e = (Elements *)malloc(sizeof(Elements));
	e->value = num;
	e->next = NULL;

	if(list_of_elements->length == 0){
		list_of_elements->first = list_of_elements->last = e;
	}
	else{
		list_of_elements->last->next = e;
		list_of_elements->last = e;
	}
	list_of_elements->length++;
};

int dequeue(List *list_of_elements){
	int var = list_of_elements->first->value;
	if(list_of_elements->length==0){
		return -9900;
	}
	else if(list_of_elements->first == list_of_elements->last){
		list_of_elements->first = list_of_elements->last = NULL;
	}
	else{
		list_of_elements->first = list_of_elements->first->next;
	}
	return var;
};

void print_enqueue(List *list_of_elements){
	Elements *e = list_of_elements->first;
	while(e!= NULL){
		printf("%d\n",e->value);
		e = e->next;
	};
};

void print_dequeue(List *list_of_elements){
	int deleted_value = dequeue(list_of_elements);
	Elements *e = list_of_elements->first;
	printf("deleted value is %d\n",deleted_value);

	while(e!= NULL){
		printf("remaining value is %d\n",e->value);
		e = e->next;
	}
}









