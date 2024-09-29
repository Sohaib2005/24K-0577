#include <stdio.h>
void main(void) 
{
    char originalChar, encryptedChar, decryptedChar;
    int key = 42; // A simple key for XOR encryption

    printf("Enter a character to encrypt: ");
    scanf(" %c", &originalChar);

    // Encrypt the character using XOR
    encryptedChar = originalChar ^ key;
    printf("Encrypted character: %c\n", encryptedChar);

    // Decrypt the character using XOR
    decryptedChar = encryptedChar ^ key;
    printf("Decrypted character: %c\n", decryptedChar);

}

