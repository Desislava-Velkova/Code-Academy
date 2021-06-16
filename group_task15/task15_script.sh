#Курсистите се разделят на отбори по двама. От Лекция
#3 на тема - Структура на една С програма. Побитови
#оператори всеки отбор взема по една задача и създава
#скрипт който да подава входни данни(няколко теста) на
#задачата, програмата извършва изчисленията и връща
#резултат, като скрипта проверява дали резултатът е
#правилен. Подават се разнообразни гранични данни,
#които да съипят програмата. Скрипта проверява за
#връщане на грешки. На всеки тест скрипта след като го
#провери връща съобщение “Теста е премината” ако е
#минал успешно или “Теста не мина, моля поправете
#вашата програма и опитайте пак

#!/bin/bash

#`gcc ./task15.c -o task15`


input="./test_cases.txt"

COUNTER=1
SUCCESS=0
FAILED=0

check_output () {

     if [ "$READ" -ne "0" ]
     then
         echo -e "\nTest failed with exit status :  $READ\n"
         ((FAILED++))
     else
         echo -e "\nTest is sucsessfull\n"
        ((SUCCESS++))
     fi
 }

print_lines () {
    
    echo -e "\n-------------------  TEST $COUNTER  -------------------\n"
}

take_output () {

    print_lines $COUNTER
    
    echo -e "Input: $line"
    
    ./task15 $line
    
    READ=$?

    check_output $FAILED $SUCCESS

}

print_summary () {
    
    echo -e "\n-------------------  SUMMARY  -------------------\n"
    echo "                  FAILED: $FAILED"
    echo "                  PASSED: $SUCCESS"
    echo -e "\n-------------------------------------------------\n"
}

while IFS= read -r line
do
    take_output $line $COUNTER

    ((COUNTER++))
done < "$input"


print_summary $FAILED $SUCCESS
