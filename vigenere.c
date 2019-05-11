#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int shift (char c);

int main(int argc, string argv[])
{
    //printf("%i\n", argc);
    if (argv[1] == NULL || argc>=3)
    {
        //printf("%i\n", argc);
        //printf("%s\n", argv[1]);
        return 1;
    }
    else
    {
        string s = get_string("plaintext: ");
        //printf("Success\n");
        for (int i = 0; i < strlen(s); i++)
        {
            //printf("%c\n", argv[1][i]);
            for(int j=0; j<strlen(argv[j]); j++)
            {
                int c = (int) argv[1][j]+s[j];
                printf("%i\n", c);
            }
        }
        return 0;
    }
}

// int shift(char c)
// {

// }

//isdigit(argv[1]) || argc<3