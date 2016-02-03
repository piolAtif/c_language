typedef struct elements{
	int value;
	struct elements *next;
}Elements;

typedef struct list{
	Elements *first;
	Elements *last;
	int length;
}List;

void initiliaze(List *);
void enqueue(List *, int);
void print_enqueue(List *);
void print_dequeue(List *);