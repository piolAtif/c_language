#include <stdio.h>
#include "list.h"

int main(){
	List list_of_elements;
	initiliaze(&list_of_elements);
	printf("length of list is %d\n",list_of_elements.length);

	enqueue(&list_of_elements,23);
	enqueue(&list_of_elements,45);
	enqueue(&list_of_elements,76);
	enqueue(&list_of_elements,32);
	enqueue(&list_of_elements,98);

	print_enqueue(&list_of_elements);

	printf("list is dequeue\n");
	print_dequeue(&list_of_elements);
	return 0;	
}