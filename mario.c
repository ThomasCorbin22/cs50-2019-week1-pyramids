#include <cs50.h>
#include <stdio.h>

void print_line(string prompt, int n);
int get_positive_int(string prompt);

int main(void)
{
    int height = get_positive_int("Height: ");
    for (int i = 0; i < height; i++)
    {
        print_line(" ", (height - (i + 1)));
        print_line("#", (i + 1));
        printf("  ");
        print_line("#", (i + 1));
        printf("\n");
    }
}

// Prompt user for positive int
int get_positive_int(string prompt)
{
    int n;
    do
    {
        n = get_int("%s", prompt);
    }
    while ((n < 1) || (n > 8));
    return n;
}

// Prints a string a set number of times
void print_line(string prompt, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%s", prompt);
    }
}
