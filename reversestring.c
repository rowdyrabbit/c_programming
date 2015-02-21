#include <stdio.h>

void reverse(char input[], char output[]);

main() {
  char input[7];
  char output[7];
  input[0] = 'd';
  input[1] = 'e';
  input[2] = 'n';
  input[3] = 'i';
  input[4] = 's';
  input[5] = 'e';
  input[6] = '\0';

  printf("%s\n", input); 
  reverse(input, output);
  printf("reversed = %s\n", output);
}


void reverse(char input[], char output[]) {
  int i=0;
  int j = 0;
  while(input[i] != '\0') {
    i++;
  }
  i--;
  printf("the value of i is: %d\n", i); 
  while(i >=0) {
    output[j] = input[i];
    j++;
    i--;
  }
  output[j] = '\0';
  
}
  
