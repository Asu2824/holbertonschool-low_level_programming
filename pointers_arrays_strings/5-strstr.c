#include "main.h"
#include <stdio.h>

/**
 * _strstr - Locates a substring.
 * @haystack: The string to search in.
 * @needle: The substring to locate.
 *
 * Return: A pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
    char *start_haystack;
    char *start_needle;

    /* If the needle is empty, return the haystack string */
    if (*needle == '\0')
    {
        return haystack;
    }

    /* Iterate through haystack string */
    while (*haystack)
    {
        start_haystack = haystack;
        start_needle = needle;

        /* Compare characters of haystack and needle */
        while (*haystack && *needle && *haystack == *needle)
        {
            haystack++;
            needle++;
        }

        /* If the entire needle was found, return the starting pointer */
        if (*needle == '\0')
        {
            return start_haystack;
        }

        haystack = start_haystack + 1;
        needle = start_needle;
    }

    /* Return NULL if 

