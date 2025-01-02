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
int isOperatorStackEmpty(OperatorStack *stack){
    return stack->top == -1;
}
void pushOperand(OperandStack *stack, double value){
    if(stack->top < MAX -1){
        stack->data[++stack->top] = value;
    }
    else {
        printf("Error: Operand stack overflow\n");
    }
}
double popOperand(OperandStack *stack){
    if(!isOperandStackEmpty(stack)){
        return stack->data[stack->top--];
    } 
    else {
        printf("Error: Operand stack underflow\n");
        return 0;
    }
}
void pushOperator(OperatorStack *stack, char value){
    if(stack->top < MAX - 1){
        stack->data[++stack->top] = value;
    } else {
        printf("Error: Operator stack overflow\n");
    }
}
char popOperator(OperatorStack *stack) {
    if (!isOperatorStackEmpty(stack)) {
        return stack->data[stack->top--];
    }
    else {
        printf("Error: Operator stack underflow\n");
        return '\0';
    }
}
int precedence(char op){
    switch (op) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
        default:
            return 0;
    }
}
int isOperator(char ch){
        return ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^';
}
void infixToPostfix(char *infix, char *postfix) {
    
}