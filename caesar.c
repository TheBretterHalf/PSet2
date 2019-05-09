#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>


int main(int argc, string argv[])
{
    if (argv[1] == NULL)
    {
        return 1;
    }
    else
    {
        int cypher = (atoi(argv[1]));
        //printf("%i\n", cypher);
        string s = get_string("plaintext: ");
        for (int i = 0; i < strlen(s); i++)
        {
            if (isupper(s[i]))
            {
                //stop spaces and commas from coming in if statement
                s[i] = (int)((((s[i] + cypher) - 64) % 26) + 64);
            }
            if (islower(s[i]))
            {
                s[i] = (int)((((s[i] + cypher) - 96) % 26) + 96);
            }
            //printf("%i\n", b);
            //printf ("%i\n", s[i]);
            //s[i] = (int) s[i]+cypher;
            //printf("ciphertext: %s\n", s);
            else
            {

            }
        }
        printf("ciphertext: %s\n", s);
    }
    return 0;
    //printf("\n");
}