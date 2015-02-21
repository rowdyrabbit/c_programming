#include <stdio.h>


#define MAX 25

main() {
  
  char buf[MAX+1];
  int bufpos = 0;
  int last_ws = -1;  


  while((buf[bufpos]=getchar()) != EOF) {
    if (buf[bufpos] == ' ' || buf[bufpos] == '\t') {
      last_ws = bufpos;
    } 
    if (buf[bufpos] == '\n') {
      buf[bufpos+1] = '\0';
      printf("%s\n", buf);
      bufpos = 0;
    }
    else if (bufpos == MAX-2) {
      if (buf[bufpos] == ' ' || buf[bufpos] == '\t') {
        buf[bufpos+1] = ' ';
      } else {
        buf[bufpos+1] = '-';
      }
      buf[bufpos+2] = '\0';
      printf("%s\n", buf);
      bufpos = 0;
    } else {
      bufpos++;
    }
  }
}
