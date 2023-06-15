#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * findLargestChar - Finds the largest character in the username.
 *
 * @username: The username.
 * @length: The length of the username.
 *
 * Return: The largest character as an index into the alphabet array.
 */

int findLargestChar(char *username, int length)
{
int largestChar = *username;
int i = 0;
unsigned int randomNumber = rand();
for (i = 0; i < length; i++)
{
if (largestChar < username[i])
largestChar = username[i];
}

srand(largestChar ^ 14);


return (randomNumber & 63);
}

/**
 * multiplyChars - Multiplies each character of the username.
 *
 * @username: The username.
 * @length: The length of the username.
 *
 * Return: The multiplied value as an index into the alphabet array.
 */


int multiplyChars(char *username, int length)
{
int result = 0;
int i = 0;
for (i = 0; i < length; i++)
{
result += username[i] * username[i];
}

return (((unsigned int)result ^ 239) & 63);
}


/**
 * generateRandomChar - Generates a random character based on the username.
 *
 * @username: The username.
 *
 * Return: A random character as an index into the alphabet array.
 */
int generateRandomChar(char *username)
{
int randomChar = 0;
int i = 0;
for (i = 0; i < *username; i++)
{
randomChar = rand();
}
return (((unsigned int)randomChar ^ 229) & 63);
}
/**
 * main - Entry point.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: 0 on success, 1 on failure.
 */
int main(int argc, char **argv)
{
int i = 0;
int ch = 0;
char keygen[7];
int usernameLength;
char *username = argv[1];
long alphabet[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850
};

if (argc < 2)
{
printf("Usage: ./keygen5 username\n");
return (1);
}
usernameLength = 0;
while (username[usernameLength])
usernameLength++;

keygen[0] = ((char *)alphabet)[(usernameLength ^ 59) & 63];
for (i = 0; i < usernameLength; i++)
ch += username[i];

keygen[1] = ((char *)alphabet)[(ch ^ 79) & 63];
ch = 1;
for (i = 0; i < usernameLength; i++)
ch *= username[i];
keygen[2] = ((char *)alphabet)[(ch ^ 85) & 63];

keygen[3] = ((char *)alphabet)[findLargestChar(username,
					       usernameLength)];
keygen[4] = ((char *)alphabet)[multiplyChars(username,
					     usernameLength)];
keygen[5] = ((char *)alphabet)[generateRandomChar(username)];
keygen[6] = '\0';

printf("%s\n", keygen);

return (0);
}
