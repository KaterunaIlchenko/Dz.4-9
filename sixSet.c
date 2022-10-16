#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv){
 if(argc < 3){
  printf("Example:./sixSet newEnv /somename\n");
  return 0;
 }
 if(setenv(argv[1], argv[2], 0) != 0){
  printf("ERROR: %s", argv[1]);
  return 0;
 } 
 printf("%s\n%s\n", argv[1], getenv(argv[1]));
 return 0;
}
