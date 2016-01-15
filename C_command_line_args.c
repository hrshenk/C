//Synopsis:  The folloing program reads a file specified as a command 
//line argument and prints it to stdout.  The purpose of it is to test
//test passing arguments via the command line.
#include <stdio.h>

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        printf("%s:Invalid parameters\n", argv[0]);
        return 0;
    }
    else
    {
        char c;
        FILE *file;
        file = fopen(argv[1], "r");
        if(file == NULL)
        {
            printf("Failed to open file\n");
            return 0;
        }
        while(fscanf(file,"%c", &c) != EOF)
        {
           printf("%c", c); 
        }
        printf("\n");
    }
    return 0;
}