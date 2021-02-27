/*Задача 8.
Напишете програма, която да създаде стек (LIFO) по подобие на този
от лекция 18, който обаче да бъде реализиран с динамично с динамично
заделяне на памет съобразно желанието на потребителя с функциите
malloc(), и free(). Стека да има следните функции (следното API):
struct Stack{
int *contents;
int top;
};
Stack create(int size); void destroy(Stack s);
int pop(); void push()
int top()
int isFull(); int isEmpty(void)*/

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
 
typedef struct{
    int top;
    int* contents;
}Stack;
 
int input(void){
    unsigned capacity = 0;

    printf("With what capacity you want to create stack ?\n");
    scanf("%ud",&capacity);

    return capacity;
}
Stack* createStack(unsigned capacity){

    Stack* stack = (Stack*)malloc(sizeof(Stack));

    if(NULL == stack){
        printf("Memory not allocated!\n");
        exit(1);
    } else{
        printf("Memory is successful allocated!\n");
    }

    stack->top = -1;
    stack->contents = (int*)malloc(capacity * sizeof(int));

    return stack;
}
 
int isFull(Stack* stack, unsigned capacity){
    return stack->top == (capacity - 1);
}
int isEmpty(Stack* stack){
    return stack->top == -1;
}
void push(Stack* stack, int item){
    if (isFull(stack, item))
        return;
    stack->contents[++stack->top] = item;
    printf("%d pushed to stack\n", item);
}
int pop(Stack* stack){
    if (isEmpty(stack))
        return INT_MIN;
    return stack->contents[stack->top--];
}
int peek(Stack* stack){
    if (isEmpty(stack))
        return INT_MIN;
    return stack->contents[stack->top];
}
int main(){
    unsigned capacity = input();

    Stack* stack = createStack(capacity);
    
    for(int i =0; i< capacity; i++){
        push(stack, (1+i));
    }
     
    printf("\n\n");

    for(int i =0; i< capacity; i++){
        printf("%d popped from stack\n", pop(stack));
    }
 
    free(stack);
    
    return 0;
}