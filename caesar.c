#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

char rotate(char a, int b);
bool only_digits(string text);
int main(int argc, string argv[])
{


    //Explicitly put the key while ./ and make sure is just one

    if (argc != 2 || !only_digits(argv[1]))
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    //Convert argv[1] from 'string' to an 'int'
    int n = atoi(argv[1]);

    char s[10000];
    //Prompt user for plaintext
    printf("Plaintext: ");
    fgets(s, sizeof(s), stdin);


    // Print the ciphered text
    printf("Ciphertext: ");
    for (int l = 0, d = strlen(s); l < d; l++)
    {
        printf("%c", rotate(s[l], n));  // Rotate and print each character
    }
    printf("\n");

    return 0;

}



//make sure every argv[1] is a digit
bool only_digits(string text)
{
    int i = 0;
    int n = 0;
    for (i = 0, n = strlen(text); i < n; i++)
    {
        if (!isdigit(text[i]))
        {
            return false;
        }
    }
    return true;


    //For each character in the plain text
    //Rotate the character if it's a letter

}

char rotate(char s, int n)
{
    char c;

    if (islower(s))
    {
        s = s - 'a';
        c = (s + n) % 26;
        c = c + 'a';
        return c;
    }
    else if (isupper(s))
    {
        s = s - 'A';
        c = (s + n) % 26;
        c = c + 'A';
        return c;
    }
    c = s;
    return c;
}



