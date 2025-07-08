#include <unistd.h>
void triangle(int n)
{
    int row = n;
    int col;
     while(row <= n)
     {
        col = 0;
        while(col<= row)
       {
           write(1,"*",1);
           col++;
       }
       write(1,"\n",1);
       row--;
     }
}
int main()
{
    triangle(3);
    return 0;
}
