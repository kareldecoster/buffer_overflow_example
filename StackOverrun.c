#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	if(argc != 2){
		printf("Please use :\n$ ./mycat filename\n");
		exit(0);
	}
    char buff[15];
    int pass = 0;

    printf("\n Enter the password : \n");
    gets(buff);

    if(strcmp(buff, "ubiquitous"))
    {
        printf ("\n Wrong Password \n");
    }
    else
    {
        printf ("\n Correct Password \n");
        pass = 1;
    }

    if(pass)
    {
       /* Now Give root or admin rights to user*/
        printf ("\n Root privileges given to the user \n");
        char command[100] = "cat ";
        strcat(command, argv[1]);
        system(command);
    }

    return 0;
}
