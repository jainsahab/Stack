typedef struct 
{
	void *elements;
	int top;
	int elementSize;
	int size;
}Stack;
typedef char String[256];
typedef int boolean;
#define true 1
#define false 0
Stack* create(int ElementSize, int Size);
boolean push(Stack* stack,void* InsertElement);
void* pop(Stack *stack);