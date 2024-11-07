#include <stdio.h>

int _isupper(int c) 
{
if (c >= 'A' && c <= 'Z') 
{
        return 1; // The character is uppercase
}
	return 0; // The character is not uppercase
}

int main() 
{
char ch = 'A';

if (_isupper(ch)) {
	printf("%c is uppercase.\n", ch);
} else
{
	printf("%c is not uppercase.\n", ch);
}

	return 0;
}

