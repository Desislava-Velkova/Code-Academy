/*18 Довършете задачата за кемперите от миналия път като добавите
променлива, в която да се събират парите, които клиента дължи на компанията.
Принтирайте резултата. Питайте клиента дали иска още налични продукти*/

#include <stdio.h>

int main(){
    char caravanNumber = 3;
    unsigned char caravanPrice = 90;
    char campNumber = 3;
    unsigned char campPrice = 100;
    int res;
    short int bill = 0;
    
    printf("Добре дошли в \"Каравани и Кемпери под наем\"!\n\
    Ако желаете каравана натиснете 1\n Ако желаете кемпер натиснете 2\n");
    scanf("%d",&res);

    if(res == 1){
        bill +=  90;
        printf("До момента вашата сметка е %d лв.\n",bill);
    }else{
        bill += 100;
        printf("До момента вашата сметка е %d лв.\n",bill);
    }
     printf("Ще желаете ли други продукти ?");

    return 0;
}