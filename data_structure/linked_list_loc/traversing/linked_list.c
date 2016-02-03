#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

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

void print_list(List *list_of_elements){
	Elements *e = list_of_elements->first;
	while(e!= NULL){
		printf("%d\n",e->value);
		e = e->next;
	};
};

int traversing(List *list_of_elements, int number){
	int *Loc;
	Elements *item = (Elements *)malloc(sizeof(Elements));
	item->value = number;
	item->next = NULL;

	if(list_of_elements->length == 0)
		return Loc = NULL;

	Elements *ptr = list_of_elements->first;
	while(ptr!= NULL){
		if(item->value == ptr->value){
			return Loc = ptr;
		}
		ptr = ptr->next;
	}
	printf("sorry! number not founded");
	return 0;
}

void insert_loc(List *list_of_elements,int prev_number, int number){
	int prev_loc = traversing(list_of_elements,prev_number);
		Elements *item = (Elements *)malloc(sizeof(Elements));
		Elements *prev_element = (Elements *)malloc(sizeof(Elements));
		item->value = number;
		item->next = prev_loc;
		// prev_element->value = prev_number;
		// prev_element->next = &item;
}