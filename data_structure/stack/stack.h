typedef struct elements{
	int value;
	struct elements *next;
}Elements;

typedef struct stack{
	Elements *top;
	int length;
}Stack;

void initialize(Stack *);
void push(Stack *,int);
void print_stack(Stack *);
int pop(Stack *);
