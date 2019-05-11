#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//|| isalpha(argv[1][0])

char ctext[] = "";


int main(int argc, string argv[])
{
    if (argv[1] == NULL || argc > 2)
    {
        return 1;
    }
    for (int j = 0; j < strlen(argv[1]); j++)
    {
        if (!isalpha(argv[1][j]))
        {
            return 1;
        }
    }
    int kcounter = strlen(argv[1]) - 1;
    string s = get_string("plaintext: ");
    for (int i = 0; i < strlen(s); i++)
    {
        if (isalpha(s[i]))
        {
            kcounter++;
            //printf("%i\t", kcounter);
            kcounter = kcounter % (strlen(argv[1]));
            //printf("%i\t\n", kcounter);
            if (isupper(argv[1][kcounter]))
            {
                int upper = argv[1][kcounter] - 'A';
                if (isupper(s[i]))
                {
                    s[i] = (((s[i] - 'A') + upper) % 26) + 'A';
                }
                else if (islower(s[i]))
                {
                    s[i] = ((((s[i] - 'a') + upper)) % 26) + 'a';
                }
                else
                {

                }
            }
            else if (islower(argv[1][kcounter]))
            {
                int lower = argv[1][kcounter] - 'a';
                if (isupper(s[i]))
                {
                    s[i] = (((s[i] - 'A') + lower) % 26) + 'A';
                }
                else if (islower(s[i]))
                {
                    s[i] = ((((s[i] - 'a') + lower)) % 26) + 'a';
                }
                else
                {

                }
            }
        }
        else
        {

        }
        strcpy(ctext, s);
    }
    printf("ciphertext: %s\n", ctext);
    return 0;
}

// int shift(char c)
// {

// }

//isdigit(argv[1]) || argc<3

//s[i] =(int) (((( s[i]) - 'A') % 26) + 'A') + ((((argv[1][kcounter]) - 'A') % 26) + 'A');