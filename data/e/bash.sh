#i=1
#while [ $i -ne 100 ]
#do
#	touch $i.c
#	((i=i+1))
#done

code="
#include <stdio.h>

int main()
{
	printf("hello world\n");
}"
i=1
while [ $i -ne 100 ]
do
	echo $code >> $i.c
	((i=i+1))
done
