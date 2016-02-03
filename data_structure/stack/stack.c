#include <stdio.h>
#include <stdlib.h>
#include "stack.h"


void initialize(Stack *stack_of_elements){
	stack_of_elements->top = NULL;
	stack_of_elements->length = 0;
};

void push(Stack *stack_of_elements, int num){
	Elements *e = (Elements *)malloc(sizeof(Elements));
	e->value = num;
	e->next = NULL;

	if(stack_of_elements->top!= NULL){
		e->next = stack_of_elements->top;
	}
	stack_of_elements->top = e;
	stack_of_elements->length++;
};

int pop(Stack *stack_of_elements){
	if(stack_of_elements->top == NULL)
		return -4004;

	int pop_element = stack_of_elements->top->value;

	if(stack_of_elements->top->next == NULL){
		stack_of_elements->top = NULL;
	}
	else {
		stack_of_elements->top = stack_of_elements->top->next;
	}
	stack_of_elements->length--;
	return pop_element; 
};

void print_stack(Stack *stack_of_elements){
	Elements *e = stack_of_elements->top;
	printf("[");
	while(e!= NULL){
		printf("%d",e->value);

		if(e->next != NULL){
			printf(",");
		}
		e = e->next;
	}
	printf("]\n");
};

