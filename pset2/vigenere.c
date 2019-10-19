# include <cs50.h>
# include <ctype.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int offset(char letter, int *offset)
{        
    if (isalpha(letter))
    {
        if (islower(letter))
            *offset = -97;
        
        else if (isupper(letter))
            *offset = -65;   
    }
    
    int alpha_letter = letter + *offset;
    return alpha_letter;
}
char encypher(int letter, int key, int offset)
{
    int crypt_letter;
    
    crypt_letter = ((letter + key)% 26) - offset;
    
    return crypt_letter;
}

int main(int argc, string argv[]) {   
    if (argc != 2)
    {
        printf("No key entered.\n");
        return 1;
    }
   
    string key = argv[1]; 
       
    for (int i = 0, n = strlen(key); i < n; i++)
    {
        if (isalpha(key[i]) == false)
        {
            printf("Your key must be alphabetical.\n");
            return 1;
        }
    } 
    
    string plaintext = GetString();
    
    for (int i = 0, j = 0, n1 = strlen(plaintext); i < n1; i++)
    {      
        
        if (isalpha(plaintext[i]) == false)
        {
            printf("%c", plaintext[i]);
            
        }
        \
        else
        {
            int plaintext_offset = 0;
            int alpha_text = offset(plaintext[i], &plaintext_offset);
            int key_offset = 0;
            int key_length = strlen(key);
            j = j%(key_length);
            int alpha_key = offset(key[j], &key_offset);
            j ++;
            
            char cypher_char = encypher(alpha_text, alpha_key, plaintext_offset);
            printf("%c", cypher_char);
        }  
    }
    printf("\n");  
    
    return 0;
}
