#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/param.h>
#include <sys/utsname.h>
struct utsname buf;

int main(){
 char hostname[HOST_NAME_MAX+1];
 gethostname(hostname, HOST_NAME_MAX);
 printf("hostname: %s\n", hostname);
 printf("hostid: %ld\n", gethostid());
 if(uname(&buf) == 0){
  printf("sysname: %s\nnodename: %s\nversion: %s\nrelease: %s\nmachine: %s\n", buf.sysname, buf.nodename, buf.version, buf.release, buf.machine);
 }
 return 0;
}
