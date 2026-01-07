#include <stdio.h>

struct employee
{
    int code; 
    float salary;
    char name[10];
}; 

int main()
{
    struct employee facebook[100]; // an array of structures
    // we can access the data using:
    facebook[0].code = 100;
    facebook[1].code = 77;
    struct employee Achyuta = {100, 71.22, "Achyuta"};
    printf("%d %f %s", Achyuta.code, Achyuta.salary, Achyuta.name);
    return 0;
}