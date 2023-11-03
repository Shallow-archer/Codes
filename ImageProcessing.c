#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(){
	char* command1="ls";
	char* argument_list1[]={"ls","-l",NULL};
	char* command2="touch" ;
	char* argument_list2[]={"touch","new_file.c",NULL};
	//char* argument_list[]={NULL};
	printf("Before calling execvp()\n");
	printf("Creating another process using fork()..\n");

	int p = fork();
	if(p > 0){
		printf("Execution inside parent process.\n");
		execvp(command1,arguments
			_list1);
	}
	else if(p==0){
		//sleep(2);
		printf("Inside child process.\n");
		int status_code = execvp(command2, argument_list2);
		//execvp() will take control of the process
		if(status_code==-1){
			printf("Process did not terminate correctly\n");
			exit(1);
		}
	}
	else{
		//parent
		printf("This line will be printed for parent");
	}
	return 0;
}
