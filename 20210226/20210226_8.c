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

int MAXSIZE = 16;
int stack[16];
int top = -1;

int isempty(){
    if(top == -1){
        return 1;
    } else{
        return 0;
    }
}
int isfull(){
    if(top == MAXSIZE){
        return 1;
    }else {
        return 0;
    }
}
int peek(){
    return stack[top];
}
int pop(){
    int data;

    if(!isempty()){
        data = stack[top];
        top = top - 1;
        return data;
    } else {
        printf("Could not retrieve data, Stack is empty.\n");
    }
}
int push(int data){
    if(!isfull()) {
        top = top + 1;
        stack[top] = data;
    } else{
        printf("Could not insert data, Stack is full.\n");
    }
}
int input(void){
    
}
int main(){
    // push items on to the stack
    push(3);
    push(5);
    push(9);
    push(1);
    push(12);
    push(15);

    printf("Element at top of the stack: %d\n" ,peek());
    printf("Elements: \n");

    // print stack data
    while(!isempty()) {
        int data = pop();
        printf("%d\n",data);
    }

    printf("Stack full: %s\n" , isfull()?"true":"false");
    printf("Stack empty: %s\n" , isempty()?"true":"false");
    
    return 0;
}