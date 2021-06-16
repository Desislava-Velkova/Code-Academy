#!/bin/bash

#~/codeAcademy/shell $ cat reneme.sh
#read path from file
while read DIR
do
    echo $DIR
    # cd $DIR
    #`find $DIR -name *.DAT`
    for file in `ls ${DIR}/*.FIN`
    do
        name=`echo $file | cut -f 1 -d'.'`
        echo $name
        mv "${name}.DAT" "${name%}.SUCCESS"
        rm $file
    done
done
