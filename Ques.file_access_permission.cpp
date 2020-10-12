#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
 int i;
 struct stat s;
 if(argc<2)
 {
	 cout<<"enter filename"<<endl;
	
 }
 for(i=1;i<argc;i++)
 {
	 cout<<"File: "<<argv[i]<<endl;
	 if(stat(argv[i],&s)<0)
	 {
		 cout<<"error in obtainings stas"<<endl;
	 }
	 else
	 {
		 cout<<"owner uid: "<<s.st_uid<<endl;
		 cout<<"group id: "<<s.st_gid<<endl;
		 cout<<"Access permission: "<<s.st_mode<<endl;
		 cout<<"Access time: "<<s.st_size<<endl;
	 }
 }
 return 0;
}
