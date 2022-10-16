#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <malloc.h>

int main(int argc, char **argv){
 if(argc < 3){
  printf("Example:./sixSet newEnv /somename\n");
  return 0;
 }
 char *ptr = argv[2], *path = malloc(strlen(ptr)+15);
 strcpy(path, argv[1]);
 strcat(path, "=");
 strcat(path, ptr);
 if(putenv(path) != 0){
  printf("ERROR: %s", argv[1]);
  return 0;
 };
 printf("%s\n%s\n", argv[1], getenv(argv[1]));
 return 0;
}
