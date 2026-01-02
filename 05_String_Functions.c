#include <stdio.h>
#include <string.h>

int main()
{
    char st[] = "Achyuta";
    char s1[56] = "Achyuta";
    char s2[56] = " Sahoo";

    // strlen for the length of string
    printf("%lu", strlen(st));

    // strcpy for copy the information from one string(source) to another string(Destination)
    char target[30];
    strcpy(target, st); // Target now contains Achyuta
    printf("%s %s", st, target);

    // strcat for joint two strings
    strcat(s1, s2);
    printf("%s %s", s1, s2);

    // strcmp for comparing two strings
    int a = strcmp("far", "ajoke");
    printf("%d", a);
    return 0;
}