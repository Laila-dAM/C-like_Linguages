#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

typedef struct{
    double data[MAX];
    int top;
} OperandStack;

typedef struct {
    char data[MAX];
    int top;
} OperatorStack;

void initOperandStack(OperandStack *stack){
    stack->top = -1;
}
void initOperatorStack(OperatorStack *stack){
    stack->top = -1;
}
int isOperandStackEmpty(OperandStack *stack){
    return stack->top == -1;
}