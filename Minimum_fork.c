#include <studio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
int p = 3 ;
while(p --){
int j = fork();
if(j > 0){
printf("Process ID: %d\n" , getpid());
}
else if(j == 0)
printf("The process ID: %d\n" , getpid());
else
printf("Error.\n");
}
return 0;
}
