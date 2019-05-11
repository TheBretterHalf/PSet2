#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//|| isalpha(argv[1][0])

char ctext[]="";

int main(int argc, string argv[])
{
    //printf("%s\n", argv[1]);
    //argv[1] == NULL || argc>2
    if (argv[1] == NULL || !isalpha(argv[1][0]) || argc>2)
    {
        //printf("%i\n", argc);
        //printf("%s\n", argv[1]);
        //printf("%c\n", argv[1][0]);
        //printf("%i\n", isalpha());
        return 1;
    }
    else
    {
        string s = get_string("plaintext: ");
        //printf("Success\n");
        for (int i = 0; i < strlen(s); i++)
        {
            int kcounter = i % strlen(argv[1]);
            //printf("%i\n", kcounter);
            if (isupper(s[i]))
            {
                //s[i] =(int) (((( s[i]) - 'A') % 26) + 'A') + ((((argv[1][kcounter]) - 'A') % 26) + 'A');
                s[i] = (((s[i]-'A') + (argv[1][kcounter]-'A'))%26)+'A';
                //printf("%c\n", s[i]);
            }
            else if (islower(s[i]))
            {
                //printf("%c\t", s[i]);
                //printf("%i\t", (int) s[i]);
                //s[i] =(int) (((( s[i]) - 'a') % 26) + 'a') + ((((argv[1][kcounter]) - 'a') % 26) + 'a');
                s[i] = (((s[i]-'a') + (argv[1][kcounter]-'a'))%26)+'a';
                //printf("%c\t\n", s[i]);
            }
            //printf("%i\n", b);
            //printf ("%i\n", s[i]);
            //s[i] = (int) s[i]+cypher;
            //printf("ciphertext: %s\n", s);
            else
            {

            }
            //printf("%s\n", s);
            strcpy(ctext,s);
        }
        printf("ciphertext: %s\n", ctext);
        return 0;
    }
}

// int shift(char c)
// {

// }

//isdigit(argv[1]) || argc<3

//s[i] =(int) (((( s[i]) - 'A') % 26) + 'A') + ((((argv[1][kcounter]) - 'A') % 26) + 'A');