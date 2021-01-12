/*3.Създайте функция iz4istiBitna. Тя получава като
параметър число и индекс, и прави на нула бита на
съответния индекс в числото.*/

#include <stdio.h>
int iz4istiBitna(int num, int index);

int main(){

    printf("%d",iz4istiBitna(15,2));
    return 0;
}
int iz4istiBitna(int num, int index){
    int x = 1;
    x = x << index;
    x = ~x;
    return x&num;
}