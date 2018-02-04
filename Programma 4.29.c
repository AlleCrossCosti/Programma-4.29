#include <stdio.h>

int main () {
    
    char c;
    
    printf("Scegli un' 'opzione\n");
    printf("-------------------\n");
    printf("a - case a \n");
    printf("A - case A \n\n");
    printf("Scelta: ");
    
    scanf("%c",&c);
    
switch(c)
  {
	  case 'a':
	  printf("Hai scelto il case a");
	  break;
	  
case 'A':
printf("Hai scelto il case A");
break;

default:
printf("Non ha scelto");

}
return 0;
}
