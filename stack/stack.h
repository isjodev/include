#ifndef STACK_H 
#define STACK_H 

typedef struct {
	int data; 
	struct node_t *next; 
} node_t; 

typedef struct {
	int size; 
	node_t* head; 
	node_t* tail; 
} stack_t; 

node_t* init_node(int data); 
void destroy_node(node_t *node); 
stack_t* init_stack(); 
int size(stack_t *stack); 
int is_empty(stack_t *stack); 
void destroy_stack(stack_t *stack); 
void push(stack_t stack, int value); 
node_t* pop(stack_t *stack); 
void print_stack(stack_t *stack); 

#endif 
