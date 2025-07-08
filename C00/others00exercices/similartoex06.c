// tmrin bhal ex06 ikon fih 97 98 99

#include <unistd.h>
void Similar_to_ex06(void)
{
    int a = 0;
    int b;
    int c;
    char c, c2,c3,c4,c5,c6;
    while (a <= 97)
    { 
        b = a + 1;
        while (b <= 98)
        {
            c = b + 1;
            while(c <= 99)
            {

              c1 = (a / 10) + '0';
              c2 = (a % 10) + '0';
              c3 = (b / 10) + '0';
              c4 = (b % 10) + '0';
              c5 = (c / 10) + '0';
              c6 = (c % 10) + '0';

              write(1, &c1, 1);
              write(1, &c2, 1);
              write(1, " ", 1);
              write(1, &c3, 1);
              write(1, &c4, 1);
              write(1, " ", 1);
              write(1, &c5, 1);
              write(1, &c6, 1);

             if (!(a == 97 && b == 98 && c == 99))
              write(1, ", ", 2);

             c++;
            }
            b++;
        }
         a++;
    }
}    

int main()
{
    similar_to_ex06();
    return 0;
}