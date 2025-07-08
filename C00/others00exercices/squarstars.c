#include <unistd.h>

void square_stars(int n)
{
    int row = 1;
    int col;

    while (row <= n)
    {
        col = 0;
        while (col < n)
        {
            write(1, "*", 1);
            col++;
        }
        write(1, "\n", 1);
        row++;
    }
}

int main()
{
    square_stars(5);
    return 0;
}
