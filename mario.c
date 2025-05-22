#include <cs50.h>
#include <stdio.h>

void print_pyramid(int n);

int main(void)
{
    int height = 0;
    do
        height = get_int("Height of the pyramid: ");
    while (height < 1 || height > 8);
    print_pyramid(height);
}

void print_pyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n - i; j++)
        {
            printf(" ");

        }
        for (int k = n - i; k <= n; k++ )
        {
            printf("#");
        }
        printf("  ");
        for (int l = 0; l <= i; l++)
        {
            printf("#");
        }
        printf("\n");
    }
}
