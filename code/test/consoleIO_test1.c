#include "syscall.h"

int
main()
{
	int n;
	for (n=150;n>=-2;n--) {
		PrintInt(n);
	}
    Exit(1);
}

