/* Michale xuan 2017.6.18 C programming study -- \
 * This is a simple explanation of this program. */
/****************************************************/


/* header files and macros */
#include <stdio.h>
#define PI 3.1415926



/*user_defined function goes here
 *
 *   /////////////////////////////////
 ******************************************************/


/* main function */
int main()
{
#if 0
	/* puts function is a built-in function comes from the C standard lib
	 * it ouputs whatever string you type in */
	//puts("something else");
	puts("hello world");
	/* printf function is another built-in function comes from the c standard lib
	 * it outputs whatever content you want to print out on to the screen
	 * printf is more flexible than puts,because it not only can print out some string
	 * but more complex format as it can represent different data type */
#endif

#if 0
	printf("This is an integer number : %d\n",10); 
	/* %d is a placeholder to hold the content you want to replace with the placeholder,\
	 * it is usually following a comma and the real value you want to express,notice that the \
     * placeholder has different types like %d %f %s %i %p */ 
	printf("2 + 3 = %d.\n",2 +3);
	printf("I am a %c programmer.\n",'C');
#endif

#if 0
	printf("I am going to use escape new line to make a new line.\n");
	printf("This is demonstration of how to use escape with single quots \
or double quots................\" double \"  and ......\' single\'\n");
#endif

#if 0
	/* variable is used to represent a certain value in C programming 
	 * variables are different as they have many types for instance char/int/short/long/double/float
	 */
	int age = 10; // integer variable with its value 10
	printf("%s is %d years old now,that's %d months.\n","Xuan",age,age * 12);
	/* define couple char type value and notice that in C programming people sometimes often get 
     * confulsed just because the char type and integer type actually can be exchanged.By it i mean
	 * char type "A" is the equivalent of integer number 65,this is often related with ASCII talbe */
	char x,y,z;
	x = 'A';
	y = x + 1;
	z = y + 1;
	printf("x:%c y:%d z:%d\n",x,y,z);
	// floating point number
	float perimeter = 10;
	float pi = PI;
	printf("perimeter %.2f as the radius is %f\n",perimeter * 2 * PI,PI);
#endif

#if 0
	/* getchar and putchar functionn are both built-in functionn of C programming 
	 * getchar() and putchar() require stdio.h and both work with int value,so called 
	 * stream oriented functions. 
	 * notice that the getchar() function is similar to scanf() function. */
	printf("Type 2 letters:");
	/* notice that the program doesn't stop and pause the process and wait for the input 
	 * as there are 2 getchar(),just like a stream one char following another */
	int c = getchar();
	int d = getchar();
	/* of course you can use printf() function to indicate the content you want to show up
	 * somehow there is other way around which is the putchar() function */
	printf("You just entered :%c and %c.\n",c,d); //printf() function
	printf("You just entered \"");
	//putchar() function
	putchar(c);
	printf("\" and \"");
	putchar(d);
	printf("\".\n");
#endif

#if 0
	/* string and array,will discuss it later more in details */
	char passwd[] = "pgjdcwn1983";
	printf("The passwd is \"%s\".\n",passwd);
#endif

#if 0
	/* scanf() function is a built-in functionn in the C programming lib
	 * it used to let user enter values along the way of certain format style 
	 * notice that the scanf() functionn cannot contain space key,it is normally one word long */
	while (getchar() != '\n');
	char a;
	scanf("%c",&a); // %c indicats it is a char value and the & sign means the memory address\
	and of course it is a logical address instead of a physical address 
	printf("the letter is %c\n",a);
	/* character type array also known as a string, the array name is the equivalent of the memory address */
	char name[15];
	printf("Your name??\n");
	scanf("%s.\n",name);
	printf("You are %s.\n",name);
#endif

#if 0
	/* fgets() function is the built-in function comes from stdio.h 
	 * fgets() contain more flexible usage in which there are several parameters you can input
	 * char *fgets(char *s, int size, FILE *stream);
	 * this is the prototype function of fgets,the first parameter is the input value its address
	 * the second parameter is the buffer size,in another word,how many chars can you load into the 
	 * program,and the last parameter is the source value,normally stdin */
	char input[64];
	printf("Instructions:\n");
	fgets(input,64,stdin);
	puts("The instructions you entered is:");
	puts(input);
#endif

#if 1
	




































	return 0;
}



/* user_fefined function with its details 
 *
 * ////////////////////////////////////////////////////
 **********************************************************************/

