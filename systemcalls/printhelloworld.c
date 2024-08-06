#include<unistd.h>
int main()
{
    char *msg="hello world";
    write(1,msg,14);
    return 0;
}
