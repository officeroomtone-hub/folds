#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

long long folds(int x, int n) {
   return (long long)x << n; /* Shifts the bits of x to the left by n places which results in the doubling of the values
   replacing the pow() function from the math.h library */
}
int main(int argc, char *argv[]){

  setbuf(stdout, NULL);
  printf("Provide starting value and rounds (e.g., x, n): $ ");

  char input[1024];
  int tokenarr[2] = {0, 0};
  int i = 0; //array index

  if (fgets(input, sizeof(input), stdin) == NULL) {
      return 1; // Safety check for EOF/error
  }

  input [strcspn(input, "\n")] = '\0';

  char *in_tokens = strtok(input, ", ");
    while (in_tokens != NULL && i < 2){
      tokenarr[i] = atoi(in_tokens);
      i++;
      in_tokens = strtok(NULL, ", ");
      };

  long long y = folds(tokenarr[0],tokenarr[1]);
  printf("you end up with %lld folds or grains of rice or shmoney if you start with %d and double it %d times\n", y, tokenarr[0], tokenarr[1]);

  double distance = y * 0.00012;
  printf("this is the equivalent of %.4f meters at a paper thickness of 0.12mm\n", distance);

  return 0;
}
