#include "main.h"

/**
 * _isalpha - checks if a character is a letter, lowercase or upper
 * @ch: a character to be checked
 * Return: 1 if ch is a letter, otherwise 0
 */

int _isalpha(int ch)
{
	return ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'));
}
