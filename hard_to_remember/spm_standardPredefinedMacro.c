#include <stdio.h>

int main()
{
	printf("Hello world.\n");
	printf("This is %s and i am at line %d in function %s.\n",__FILE__,__LINE__,__FUNCTION__);
	return 0;
}
