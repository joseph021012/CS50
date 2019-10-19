# include <cs50.h>
# include <ctype.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

char encrypt(int key, char letter)
{       
    if (isalpha(letter) == false)
        return letter;

    int offset = 0;

    if (islower(letter))
        offset = 97;
        
    else if (isupper(letter))
        offset = 65;
        
    int alpha_letter = letter - offset;
        
    int crypt_letter;

    crypt_letter = ((alpha_letter + key)% 26) + offset;
    
    return crypt_letter;
}

int main(int argc, string argv[])
{   
    if (argc != 2)
    {
        printf("Usage: ./asciimath key\n");
        return 1;
    }
    
    int key = atoi(argv[1]); 
    string plaintext = GetString();
    
    for (int i = 0, n = strlen(plaintext); i < n; i++)
        printf("%c", encrypt(key, plaintext[i]));
    
    printf("\n");
        
    return 0;
}
