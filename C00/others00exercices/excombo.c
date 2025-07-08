#include <unistd.h>
void similar_to_ex05(void)
{
    char a;
    char b;
    char c;
    char d;

     a = '0';
    while(a <= '6')
{
     b = a +1;
     while(b <= '7')
     {
        c = b +1;
        while(c <= '8')
        {
          d = c +1;
          while(d <= '9')
          {
             write(1,&a,1);
             write(1,&b,1);
             write(1,&c,1);
             write(1,&d,1);
      
            if(!(a =='6' && b =='7' && c =='8' && d =='9' ))
            {
               write(1,",",1);
            }
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
    similar_to_ex05();
    return 0;
}