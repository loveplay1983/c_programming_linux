#include <stdio.h>
#include <stdlib.h>
#include "add.h"
#include "var_a.c"
extern int a = 1000;
int main()
{
	int aa = 100;
	printf ("%d\n",aa);
	printf ("%d\n",a);
	return 0;
}
