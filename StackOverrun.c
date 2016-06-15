#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    char buff[15];
    int pass = 0;
    char command[100];
    strcpy(command, "cat ");

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
        printf("\n Give the name of the file you want to show \n");
        gets(buff);
        strcat(command, buff);
        system(command);
    }

    return 0;
}
