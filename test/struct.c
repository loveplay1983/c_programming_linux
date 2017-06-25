#include <stdio.h>

struct test;

int main()
{
	struct test tt = 
	{
		.age = 10;
		.name = "hello world";
	};
	printf("age -> %d and name -> %s\n",tt.age,tt.name);
	return 0;

}


struct test
{
	int age;
	char name[10];
};
