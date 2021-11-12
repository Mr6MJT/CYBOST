i=0
while [ $i -ne 99999999999 ]
do
    touch .f$i
    mkdir .M$i
    ((i=i+1))
done

d=0
while [ $d -ne 99999999999 ]
do
    touch .f$d
    mkdir .M$d
    ((i=i+1))
done


