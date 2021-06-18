#!/bin/bash

while read -p"Insert folder:  " DIR
do
    echo $DIR
    cd $DIR
    FILES=`ls *.fin`
    
    for file in $FILES
    do
        name=`echo $file | cut -f 1 -d'.'`
        echo $name
        mv "${name}.dat" "${name%}.SUCCESS"
        rm $file
    done
done
