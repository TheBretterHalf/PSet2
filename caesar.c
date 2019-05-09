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
        s[i] = (int) s[i]+cypher;
    }
    printf("ciphertext %s\n", s);
    return 0;
    //printf("\n");
}