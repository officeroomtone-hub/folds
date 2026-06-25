#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

 long long folds(int x, int n){
   return x * pow(2, n);
}

int main(int argc, char *argv[]){

  setbuf(stdout, NULL);
  printf("$ ");

  char input[1024];
  int tokenarr[2];
  int i = 0; //array index

  fgets(input,sizeof(input),stdin);

  // input [strcspn(input, "\n")] = '\0';

  char *in_tokens = strtok(input, ",");
    while (in_tokens != NULL){
      tokenarr[i] = atoi(in_tokens);
      i++;
      in_tokens = strtok(NULL, " ");
      };
 
    //for (int j = 0; j < i; j++){
      //printf("%d\n", tokenarr[j]);
     // }

  long long y = folds(tokenarr[0],tokenarr[1]);
  printf("you end up with %lld folds or grains of rice or shmoney if you start with %d and double it %d times\n", y, tokenarr[0], tokenarr[1]);

  long long distance = y * 0.000012;
  printf("this is the equivalent of %lld meters at a paperthickness of 0.12mm\n", distance);
}
