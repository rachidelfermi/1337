#include <unistd.h>
void pointers(int n)
{
  int age = 25;

  int* ptr = &age;

  *ptr = 31;

  write(1,"ptr",3);
}
  

int main()
{
    pattern1();
    return 0;
}