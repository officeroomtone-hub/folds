#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int folds(int x, int n){
   return x * pow(x , n);
}

int main(int argc, char *argv[]){

  setbuf(stdout, NULL);
  printf("$ ");

  char input[1024];
  int tokenarr[2];
  int i = 0; //array index

  fgets(input,sizeof(input),stdin);


  input [strcspn(input, "\n")] = '\0';

  char *in_tokens = strtok(input, ",");
    while (in_tokens != NULL){
      tokenarr[i] = atoi(in_tokens);
      i++;
      printf("%s\n", in_tokens);
      printf("%d\n", tokenarr[i]);
    in_tokens = strtok(NULL, " ");
      };

  int int_input;
  int_input = (int64_t) input;

  int int_tokens;
  int_tokens = (int64_t)in_tokens;


  printf(" input is: %s\n in_tokens is: %s\n", input, in_tokens);

  int y = folds (int_input, int_tokens);

  printf("%d", y);
}
