/*11. Създайте С програма, която калкулира стойността на покупки в магазин за
хранителни стоки. Клиентът може да закупи различна комбинация от продукти. В
магазина има следните налични продукти и цени:
Домати- 4.5 лв.за килограм, Брашно 1.80 лв. за килограм,
Кисело мляко - 0.50 лв. за брой, Сладолед на фунийки 0.60 лв. броя
Бонбони 1.50 лв. за килограм, Близалки 0.15 лв. за брой.
Указания:
Помислете какви променливи ще дефинирате?
Помислете в каква последователност ще изпълнявате действията?
В момента няма да проверяваме въведените стойности от клиента.
printf("Здравейте, добре дошли в нашия магазин! Днес предлагаме - пресни домати,
брашно, кисело мляко, сладолед на фунийки и близалки.\n");
printf("Колко килограма домати ще желаете? ");
scanf("%f",&fTomatoWeight);
float fTomatoTotal = fTomatoWeight*fTomatoPrice;*/

#include <stdio.h>

int main(){
   float tomatoPrice = 4.5;
   float flourPrice = 1.80;
   float yogourtPrice = 0.50;
   float icecreamPrice = 0.60;
   float candyPrice = 1.50;
   float lolipopPrice = 0.15;
   float tomatoWeight, flourWeight, candyWeight;
   short int yogourtNumber, icecreamNumber, lolipopNumber;

   printf("Здравейте, добре дошли в нашия магазин!\n\
   Днес предлагаме - пресни домати,брашно, кисело мляко, сладолед на фунийки и близалки.\n");
   printf("Колко килограма домати ще желаете?\n ");

   scanf("%f", &tomatoWeight);
   float tomatoTotal = tomatoWeight*tomatoPrice;

   printf("Избраното количество домати до момента е на цена %.2f lv.\n",tomatoTotal);
   printf("Колко броя близалки ще желаете?\n ");
   
   scanf("%d", &lolipopNumber);
   float lolipopTotal = lolipopNumber*lolipopPrice;
   
   printf("Избраното количество близалки до момента е на цена %.2f lv.\n",lolipopTotal);

    return 0;
}