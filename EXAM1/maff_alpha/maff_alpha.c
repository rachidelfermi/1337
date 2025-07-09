#include <unistd.h>
int main()
{
 char i = 'a';
 while(i<='z')
{
write(1,&i,1);
i++;
}
return 0;
}
