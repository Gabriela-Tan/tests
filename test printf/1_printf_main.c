#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
printf("\033[1;32m1. testing characters\033[0m\n");
	char w = 'W';
	char t = 'T';
	char f = 'F';
 	ft_printf("ft_printf 3 char arguments: %c %c %c\n", w, t, f);
	printf("printf 3 char arguments: %c %c %c\n", w, t, f);

printf("\033[1;32m2. testing strings\033[0m\n");
	char str1[] = "some";
	char str2[] = "strings";
 	ft_printf("ft_printf 2 str arguments: %s %s\n", str1, str2);
	printf("printf 2 str arguments: %s %s\n", str1, str2);

printf("\033[1;32m3. testing pointers\033[0m\n");
	int	example1 = 42;
	int *ptr1 = &example1;
	int *ptr2 = NULL;
	ft_printf("ft_printf pointer: %p\n", ptr1);
	printf("printf pointer: %p\n", ptr1);

	ft_printf("ft_printf null pointer: %p\n", ptr2);
	printf("printf null pointer: %p\n", ptr2);

printf("\033[1;32m4. testing integers\033[0m\n");
	ft_printf("-2147483648 with ft_printf: %d\n", -2147483648);
	printf("-2147483648 with printf: %d\n", -2147483648);
	ft_printf("2147483647 with ft_printf: %d\n", 2147483647);
	printf("2147483647 with printf: %d\n", 2147483647);
	ft_printf("-15 with ft_printf: %d\n", -15);
	printf("-15 with printf: %d\n", -15);
	ft_printf("0 with ft_printf: %d\n", 0);
	printf("0 with printf: %d\n", 0);

printf("\033[1;32m5. testing unsigned integers\033[0m\n");
	ft_printf("4294967295 with ft_printf: %u\n", 4294967295);
	printf("4294967295 with printf: %u\n", 4294967295);
	ft_printf("-15 with ft_printf: %u\n", -15);
	printf("-15 with printf (BS value): %u\n", -15);
	ft_printf("0 with ft_printf (BS value): %u\n", 0);
	printf("0 with printf: %u\n", 0);

printf("\033[1;32m6. testing hexadecimals\033[0m\n");
	ft_printf("998866 (f3dd2) with ft_printf: %x\n", 998866);
	printf("998866 (f3dd2) with printf: %x\n", 998866);
	ft_printf("479 (1df) with ft_printf: %x\n", 479);
	printf("479 (1df) with printf: %x\n", 479);

printf("\033[1;32m6. testing uppercase hexadecimals\033[0m\n");
	ft_printf("998866 (f3dd2) with ft_printf: %X\n", 998866);
	printf("998866 (f3dd2) with printf: %X\n", 998866);
	ft_printf("479 (1df) with ft_printf: %X\n", 479);
	printf("479 (1df) with printf: %X\n", 479);

printf("\033[1;32m6. testing %%\033[0m\n");
	ft_printf("2 percent signs with ft_printf: %%\n");
	printf("2 percent signs with printf: %%\n");

printf("\033[1;32m7. testing mix of everything\033[0m\n");
	char a = 'A';
	char b[] = "test";
	int d = 123;
	unsigned int e = 321;
	unsigned int hex = 123;
	unsigned int g = 321;

	printf("Expected output: A test 0x7ff7b89a7784 123 321 7b 141\n");
	ft_printf("ft_printf: %c %s %p %d %u %x %X\n", a, b, ptr1, d, e, hex, g);
	printf("printf: %c %s %p %d %u %x %X\n", a, b, ptr1, d, e, hex, g);

}
