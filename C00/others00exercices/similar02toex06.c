//ntb3 ar9am hka 60 61 62 63

#include <unistd.h>
void similar02_to_ex06(void)
{
    int a = 0;
    int b;
    int c;
    int d;
    char c1, c2, c3, c4, c5, c6, c7, c8;

    while (a <= 60)
    {
        b = a + 1;
        while (b <= 61)
        {
            c = b + 1;
            while (c <= 62)
            {
                d = c + 1;
                while (d <= 63)
                {
                    c1 = (a / 10) + '0';
                    c2 = (a % 10) + '0';
                    c3 = (b / 10) + '0';
                    c4 = (b % 10) + '0';
                    c5 = (c / 10) + '0';
                    c6 = (c % 10) + '0';
                    c7 = (d / 10) + '0';
                    c8 = (d % 10) + '0';

                    write(1, &c1, 1);
                    write(1, &c2, 1);
                    write(1, " ", 1);
                    write(1, &c3, 1);
                    write(1, &c4, 1);
                    write(1, " ", 1);
                    write(1, &c5, 1);
                    write(1, &c6, 1);
                    write(1, " ", 1);
                    write(1, &c7, 1);
                    write(1, &c8, 1);

                    if (!(a == 60 && b == 61 && c == 62 && d == 63))
                        write(1, ", ", 2);

                    d++;
                }
                c++;
            }
            b++;
        }
        a++;
    }
}

int main()
{
    similar02_to_ex06();
    return 0;
}
