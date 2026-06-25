#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

/* long long folds(int x, int n){
   return x * pow(2, n);
} */

long long folds(int x, int n) {
   return (long long)x << n; // Shifts the bits of x to the left by n places which results in the doubling of the value
}
int main(int argc, char *argv[]){

  setbuf(stdout, NULL);
  printf("Provide starting value and rounds (e.g., x, n): $ ");

  char input[1024];
  int tokenarr[2];
  int i = 0; //array index

  if (fgets(input, sizeof(input), stdin) == NULL) {
      return 1; // Safety check for EOF/error
  }

  // input [strcspn(input, "\n")] = '\0';

  char *in_tokens = strtok(input, ", ");
    while (in_tokens != NULL && i < 2){
      tokenarr[i] = atoi(in_tokens);
      i++;
      in_tokens = strtok(NULL, ", ");
      };
 
    //for (int j = 0; j < i; j++){
      //printf("%d\n", tokenarr[j]);
     // }

  long long y = folds(tokenarr[0],tokenarr[1]);
  printf("you end up with %lld folds or grains of rice or shmoney if you start with %d and double it %d times\n", y, tokenarr[0], tokenarr[1]);

  long long distance = y * 0.000012;
  printf("this is the equivalent of %lld meters at a paperthickness of 0.12mm\n", distance);
}
