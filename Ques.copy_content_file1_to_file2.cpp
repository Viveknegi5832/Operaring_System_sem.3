#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<fcntl.h>
void typefile(char * filename)
{
 int fd,nread;
 char buf[1024];
 fd=open(filename,O_RDONLY);
 if(fd==-1)
 {
  printf("Error occurred in opening file\n");
  return;
 }
 while((nread=read(fd,buf,sizeof(buf)))>0)
 {
  write(1,buf,nread);
  close(fd);
 }
}
int main(int argc ,char* argv[])
{
  int argno;
  for(argno=1;argno<argc;argno)
  {
   typefile(argv[argno]);
   exit(0);
  }
}
