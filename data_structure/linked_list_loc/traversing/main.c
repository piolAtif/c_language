#include <stdio.h>
#include "linked_list.h"

int main(){
	List list_of_elements;
	initiliaze(&list_of_elements);
	printf("length of list is %d\n",list_of_elements.length);

	enqueue(&list_of_elements,65);
	enqueue(&list_of_elements,63);
	enqueue(&list_of_elements,45);

	enqueue(&list_of_elements,56);
	enqueue(&list_of_elements,32);
	enqueue(&list_of_elements,76);
	enqueue(&list_of_elements,98);
	enqueue(&list_of_elements,90);
	enqueue(&list_of_elements,54);
	enqueue(&list_of_elements,32);
	enqueue(&list_of_elements,45);
	enqueue(&list_of_elements,32);
	enqueue(&list_of_elements,76);
	enqueue(&list_of_elements,87);
	enqueue(&list_of_elements,38);

	print_list(&list_of_elements);
	printf("after inserting location is ......");
	// printf("%d",traversing(&list_of_elements,54));
	insert_loc(&list_of_elements,32,102);
	print_list(&list_of_elements);
}