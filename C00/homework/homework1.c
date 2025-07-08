/*Write a function that prints "Hello, World!" and call it from main.
c
CopyEdit
void greet(void);*/
#include <unistd.h>
void greet (void)
{
    write(1,"Hello, World!",13);
}
int main()
{
    greet();
    return 0;
}


