#1.Напишете скрипт, който да проверява дали файлът има права за
#четене(-r), за писане(-w) и за екзекютване(-x). По подобие на примера,
#показан по горе, проверяващ името дали е файл, директория или дивайс.


#!/bin/bash


if [ -z "$1" ]
then
    echo "You didnt provide a file name!"
    exit 1
fi


for FILE in $@
do
    if [ ! -f "$FILE" ]
    then
        echo "$FILE is not a valid file name"
        continue
    fi


    if [ -r "$FILE" ]
    then
        echo "$FILE is readable"
    fi
    
    
    if [ -w "$FILE" ]
    then
        echo "$FILE is writable"
    fi
    
    
    if [ -x "$FILE" ]
    then
        echo "$FILE is executable"
    fi

    echo -e "\n"
done

