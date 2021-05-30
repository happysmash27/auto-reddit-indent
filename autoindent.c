#include <stdio.h>

int main(){
  //Input character
  //int because that's what getc gives
  //unsigned because we are not outputting negative characters
  unsigned int inc;

  printf("    ");
  while ((inc = getc(stdin)) != EOF){
    putchar(inc);
    if (inc == '\n'){
      printf("    ");
    }
  }
}
