

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
                // key char to uppercase
                char keyChar = toupper(key[j % strlen(key)]);
                
                // encipher letter
                char letter = ((text[i] - 65 + keyChar - 65) % 26) + 65;
                
                // print letter
                printf("%c", letter);  
            }
            // else, text char is lowercase
            else
            {
                 // key char to lowercase
                char keyChar = tolower(key[j % strlen(key)]);
                
                // encipher letter
                char letter = ((text[i] - 97 + keyChar - 97) % 26) + 97;
                
                // print letter
                printf("%c", letter);
            }
            // increment keyChar counter
            j++;
        }
        // else, print non-alphabetic char
        else
        {
            printf("%c", text[i]);
        }
    }
    
}
