

// include libraries
#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// main function
int main(int argc, string argv[])
{
    // validate argc
    if (argc != 2)
    {
        printf("Please supply a string key for devigenere.\n");
        return 1;
    }
    
    // store key as string
    string key = argv[1];

    // validate key
    for (int i = 0; i < strlen(key); i++)
    {
        if (!isalpha(key[i]))
        {
            printf("Please supply a string key for devigenere.\n");
            return 1;
        }
    }

    // get plaintext
    string text = GetString();
    
    // declare keyChar counter
    int j = 0;

    // loop over text chars
    for (int i = 0; i < strlen(text); i++)
    {
        // check if text char is in alphabet
        if (isalpha(text[i]))
        {   
            // check if text char is uppercase
            if (isupper(text[i]))
            {
            }
            // else, text char is lowercase
            else
            {
            }
        }
        // else, print non-alphabetic char
        else
        {
            printf("%c", text[i]);
        }
    }
    
}
