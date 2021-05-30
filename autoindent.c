#include <stdio.h>

int main(){
  //Input character
  //int because that's what getc gives
  //unsigned because we are not outputting negative characters
  unsigned int inc;

  unsigned int prevchar = '\n';

  while ((inc = getc(stdin)) != EOF){
    if (prevchar == '\n'){
      printf("    ");
    }
    putchar(inc);
    prevchar = inc;
  }
}
