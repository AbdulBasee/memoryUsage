#include<stdio.h>
#include<stdlib.h>
// for accepting the command line argument
int main(int argc, char *argv[])
{
   int i=0,n,m=0;
   char *a;
   //If we forget to enter the command line arguments
   //then exit
   if(argc<2){
       printf("Invalid Command line arguments ");
       exit(0);
   }
   n=atoi(argv[1]);
   m=1024*n;
   if(argc==2){
       a=(char*)malloc(n*1024);
       printf("Memory Allocated ");
   }
   //IF we have a third command line argument then we itreate that many number of times
   if(argc==3){
       m=atoi(argv[3]);
   }
   /*
   The program should do this indefinitely, or, perhaps, for a certain amount of time also specified at the command line.
   */
   printf("Accessing the Array...");
   for(i=0;i<m;i++)
           printf("%c\t",a[i]);
  
}


