#include "syscall.h"

int
main()
{
	int n;
	for (n=11;n>=-2;n--) {
		PrintInt(n);
	}
    Exit(0);
}

