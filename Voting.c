#include <stdio.h>

int main()
{
    printf("ELIGIBLITY FOR VOTING, BY BIKASH KR SINGHA\n");
    int age;
    printf("Enter your age:");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("You are adult, you can vote");
    }
    else if (age >= 15 && age < 18)
    {
        printf("You are teenager, you can't vote");
    }
    else
    {
        printf("Sorry you are a kid");
    }
    return 0;
}
