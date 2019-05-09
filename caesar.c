#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>


int main(int argc, string argv[])
{
    int cypher = (atoi(argv[1]))%26;
    //printf("%i\n", cypher);
    string s = get_string("plaintext: ");
    for (int i = 0; i < strlen(s); i++)
    {
        //printf("%i\n", s[i]+cypher);
        while ((s[i]+cypher)>122)
        {
            //printf ("%i", s[i]);
            s[i] = (int) s[i]+cypher-26;
            //printf ("%i\n", s[i]);
        }
        while ((s[i]+cypher)>90 && (s[i]+cypher)<=96)
        {
            //printf ("%i\n", s[i]);
            s[i] = (int) s[i]+cypher-26;
            //printf ("%i\n", s[i]);
        }
        //printf ("%i\n", s[i]);
        s[i] = (int) s[i]+cypher;
        //printf ("%i\n", s[i]);
        //s[i] = (int) s[i]+cypher;
        printf("ciphertext: %s\n", s);
    }
    //printf("ciphertext: %s\n", s);
    return 0;
    //printf("\n");
}