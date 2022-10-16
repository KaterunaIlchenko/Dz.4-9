#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv){
 if(argv[1] == 0){
  printf("Example: ./five HOME\n");
  return 0;
 }
 char *environment = getenv(argv[1]);
 printf("%s\n%s\n", argv[1], environment);
}
