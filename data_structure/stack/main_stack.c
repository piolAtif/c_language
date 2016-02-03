#include <stdio.h>
#include "stack.h"

int main(){
	Stack stack_of_elements;
	initialize(&stack_of_elements);
	printf("length of stack %d\n",stack_of_elements.length);

	push(&stack_of_elements,34);
	push(&stack_of_elements,54);
	push(&stack_of_elements,65);
	push(&stack_of_elements,221);
	push(&stack_of_elements,654);

	print_stack(&stack_of_elements);
	printf("length of stack %d\n",stack_of_elements.length);

	printf("pop.......\n");
	printf("%d\n",pop(&stack_of_elements));
	printf("%d\n",pop(&stack_of_elements));
	printf("%d\n",pop(&stack_of_elements));
	printf("%d\n",pop(&stack_of_elements)); 
	printf("%d\n",pop(&stack_of_elements)); 
	printf("%d\n",pop(&stack_of_elements)); 


	printf("remaining list........\n");
	print_stack(&stack_of_elements);

	printf("length of stack %d\n",stack_of_elements.length);

	push(&stack_of_elements,87);
	print_stack(&stack_of_elements);
	printf("lenght of stack is %d\n",stack_of_elements.length);

	push(&stack_of_elements,1);
	push(&stack_of_elements,2);
	push(&stack_of_elements,3);
	push(&stack_of_elements,4);
	push(&stack_of_elements,5);
	push(&stack_of_elements,6);
	push(&stack_of_elements,7);

	print_stack(&stack_of_elements);
	printf("lenght of stack is %d\n",stack_of_elements.length);


}