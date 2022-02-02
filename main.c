#include "AES.h"

int main()
{
    AES_128 aes;

	uint8_t message[16] = "Message secret !";
	uint8_t cipherKey[16] = { 0x2B, 0x7E, 0x15, 0x16, 0x28, 0xAE, 0xD2, 0xA6, 0xAB, 0xF7, 0x15, 0x88, 0x09, 0xCF, 0x4F, 0x3C };

    setCipherKey(&aes, cipherKey);

    encrypt128(&aes, message);

    decrypt128(&aes, message); 
    
	system("pause");
	
    return EXIT_SUCCESS;
}