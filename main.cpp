#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#define STRING_BUFFER 256

void Rot13(char cIn[], char cOut[])
{
	for(unsigned i = 0; i < strlen(cIn); i++)
	{
		char c_limit = 'z' - 13;
		if(cIn[i] > c_limit)
		{
			cOut[i] = 'a' + (13 - ('z' - cIn[i])) - 1;
		}
		else
		{
			cOut[i] = cIn[i] + 13;
		}
	}
	cOut[strlen(cIn)] = '\0';
}


int main()
{
	char c_user_string[STRING_BUFFER];
	char c_encrypted_string[STRING_BUFFER];
	char c_decrypted_string[STRING_BUFFER];

	printf("Encriptador\n");
	printf("Introduzca el texto a encriptar\n");
	scanf("%s", c_user_string);
	Rot13(c_user_string, c_encrypted_string);

	printf("Encriptado: '%s'\n", c_encrypted_string);
	Rot13(c_encrypted_string, c_decrypted_string);
	printf("Desencriptado: '%s'\n", c_decrypted_string);

	return 0;
}
