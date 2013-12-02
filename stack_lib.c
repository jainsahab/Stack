#include "stack_lib.h"
#include <stdlib.h>
#include <string.h>
Stack* create(int ElementSize, int Size){
	Stack* stack;
	stack=malloc(sizeof(Stack)*1);
	stack->elementSize=ElementSize;
	stack->size=Size;
	stack->top=-1;
	stack->elements=calloc(stack->size,stack->elementSize);
	return stack;
}

boolean IsStackFull(Stack *st){
	if((st->top+1) >= st->size)
		return true;
	else
		return false;
}

boolean push(Stack* stack,void* elementToPush){
	void* address;
	if(IsStackFull(stack))
		return false;
	address=stack->elements+(++(stack->top)*stack->elementSize);
	memcpy(address, elementToPush, stack->elementSize);
	return true;
}

boolean IsEmpty(Stack* stack){
	return stack->top==-1;
}

void* pop(Stack* stack){
	if(IsEmpty(stack))
		return false;
	return stack->elements+((stack->top--)*stack->elementSize);
}