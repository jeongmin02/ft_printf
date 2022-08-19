#include <stdio.h>
#include <unistd.h>

int main(void)
{
	// printf("%c\n", 'a');
	// printf("%s\n", "abc");
	// // printf("%p")
	// printf("%d\n", 123);
	// printf("%i\n", 123);
	// printf("%u\n", -123);
	// printf("%x\n", 123);
	// printf("%X\n", 123);
	// printf("%%\n");
	// printf("--------------------\n");
	// printf("%d%d\n", 123, 456);
	// printf("%%d\n");
	// printf("%d%\n", 123);
	// printf("123\n");
	// int a;
	
	// a = printf("abc%z123");
	// printf("return : %d\n", a);
	write(1, "%", 1);
}