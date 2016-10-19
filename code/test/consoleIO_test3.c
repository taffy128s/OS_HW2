#include "syscall.h"

int
main()
{
	int n;
	/*PrintInt(1 << 31);
    PrintInt(2147483647);*/
    for (n = 999; n >= 995; n--)
        PrintInt(n);
    Exit(3);
}

