#include "libft.h"
#include <stdio.h>
#include <string.h>

void	ft_increment_striteri(unsigned int i, char *c) 
	{
		*c = *c + 1;
	}

char	ft_increment_strmapi(unsigned int i, char c)
	{
		return (c += 1);
	}

int	main(void)
{
printf("\033[1;32mft_atoi\033[0m\n");
	printf("Mine: %d | Should be: -123 (-123)\n", ft_atoi("-123"));
	printf("Mine: %d | Should be: -1 (-1b23)\n", ft_atoi("-1b23"));
	printf("Mine: %d | Should be: 0 (- -  +-123)\n", ft_atoi(" - -  +-123"));
	printf("Mine: %d | Should be: 0 ()\n", ft_atoi(""));

printf("\033[1;32mft_bzero\033[0m");
	char str_bzero1[10] = "something";
	ft_bzero(str_bzero1, 0);
	printf("\nShould be: void (something, 0), Output: ");
	fwrite(str_bzero1, 1, 0, stdout);
	char str_bzero[10] = "something";
	printf("\nShould be: ething (something, 3), Output: ");
	ft_bzero(str_bzero, 3);
	fwrite(str_bzero, 1, sizeof(str_bzero), stdout);
	printf("\n");

printf("\033[1;32mft_isalnum\033[0m\n");
	printf("Mine: %d | Should be: 1 (G)\n", ft_isalnum('G'));
	printf("Mine: %d | Should be: 0 (tab)\n", ft_isalnum('\t'));

printf("\033[1;32mft_isalpha\033[0m\n");
	printf("Mine: %d | Should be: 1 (G)\n", ft_isalpha('G'));
	printf("Mine: %d | Should be: 0 (8)\n", ft_isalpha('8'));

printf("\033[1;32mft_isascii\033[0m\n");
	printf("Mine: %d | Should be: 1 (71 - G)\n", ft_isascii(71));
	printf("Mine: %d | Should be: 0 (130 - é)\n", ft_isascii(130));

printf("\033[1;32mft_isdigit\033[0m\n");
	printf("Mine: %d | Should be: 1 (9)\n", ft_isdigit('9'));
	printf("Mine: %d | Should be: 0 (G)\n", ft_isdigit('G'));

printf("\033[1;32mft_isprint\033[0m\n");
	printf("Mine: %d | Should be: 1 (G)\n", ft_isprint('G'));
	printf("Mine: %d | Should be: 0 (tab)\n", ft_isprint('\t'));

printf("\033[1;32mft_itoa\033[0m\n");
	printf("Mine: %s | Should be: -123 (-123)\n", ft_itoa(-123));
	printf("Mine: %s | Should be: -2147483648 (-2147483648)\n", ft_itoa(-2147483648));
	printf("Mine: %s | Should be: -123 (- -  +-123)\n", ft_itoa( - -  +-123));
	printf("Mine: %s | Should be: 0 (0)\n", ft_itoa(0));

printf("\033[1;32mft_memchr\033[0m\n");
	char	str_memchr[] = "Hello, world!";
	char	*ptr;
	printf("String == Hello, world!\n");
	ptr = ft_memchr(str_memchr, '!', sizeof(str_memchr));
	printf("Searching for: !, ");
	printf("! found at index %ld\n", ptr - str_memchr);
	ptr = ft_memchr(str_memchr, ',', sizeof(str_memchr));
	printf("Searching for: ,, ");
	printf(", found at index %ld\n", ptr - str_memchr);
	ptr = ft_memchr(str_memchr, 'x', sizeof(str_memchr));
	printf("Searching for: x, ");
	printf("x found at index %ld (some random bs value)\n", ptr - str_memchr);

printf("\033[1;32mft_memcmp\033[0m\n");
	char	str_memcmp3[] = "abc";
	char	str_memcmp4[] = "abc";
	int		result_mine1;
	int		result_std1;
	result_mine1 = ft_memcmp(str_memcmp3, str_memcmp4, 2);
	printf("Mine ft_memcmp: %d | abc vs abc\n", result_mine1);
	result_std1 = memcmp(str_memcmp3, str_memcmp4, 2);
	printf("Std memcmp: %d\n", result_std1);

	char	str_memcmp5[] = "something";
	char	str_memcmp6[] = "sth";
	int		result_mine2;
	int		result_std2;
	result_mine2 = ft_memcmp(str_memcmp5, str_memcmp6, 2);
	printf("Mine ft_memcmp: %d | something vs sth\n", result_mine2);
	result_std2 = memcmp(str_memcmp5, str_memcmp6, 2);
	printf("Std memcmp: %d\n", result_std2);

printf("\033[1;32mft_memcpy\033[0m\n");
	char src_memcpy1[50] = "this is the source string";
	char dst_memcpy1[50];
	char src_memcpy2[50] = "this is the source string";
	char dst_memcpy2[50];
	ft_memcpy(dst_memcpy1, src_memcpy1, sizeof(src_memcpy1));
	memcpy(dst_memcpy2, src_memcpy2, sizeof(src_memcpy2));
	printf("ft_memcpy, whole string: %s\n", dst_memcpy1);
	printf("standard memcpy, whole string: %s\n", dst_memcpy2);

	char src_memcpy3[50] = "this is the source string";
	char dst_memcpy3[50];
	char src_memcpy4[50] = "this is the source string";
	char dst_memcpy4[50];
	ft_memcpy(dst_memcpy3, src_memcpy3, 4);
	memcpy(dst_memcpy4, src_memcpy4, 4);
	printf("ft_memcpy, four bytes: %s\n", dst_memcpy3);
	printf("standard memcpy, four bytes: %s\n", dst_memcpy4);

printf("\033[1;32mft_memmove\033[0m\n");
	char src_memmove1[20] = "source string";
	char dst_memmove1[20];
	char src_memmove2[20] = "source string";
	char dst_memmove2[50];
	ft_memmove(dst_memmove1, src_memmove1, sizeof(src_memmove1));
	memmove(dst_memmove2, src_memmove2, sizeof(src_memmove2));
	printf("ft_memmove, whole string: %s\n", dst_memmove1);
	printf("standard memmove, whole string: %s\n", dst_memmove2);

	char src_memmove3[20] = "source string";
	char dst_memmove3[20];
	char src_memmove4[20] = "source string";
	char dst_memmove4[50];
	ft_memmove(dst_memmove3, src_memmove3, 4);
	memmove(dst_memmove4, src_memmove4, 4);
	printf("ft_memmove, four bytes: %s\n", dst_memmove3);
	printf("standard memmove, four bytes: %s\n", dst_memmove4);

	char src_memmove5[20] = "";
	char dst_memmove5[20];
	char src_memmove6[20] = "";
	char dst_memmove6[50];
	ft_memmove(dst_memmove5, src_memmove5, 4);
	memmove(dst_memmove6, src_memmove6, 4);
	printf("ft_memmove, empty source string: %s\n", dst_memmove5);
	printf("standard memmove, empty source string: %s\n", dst_memmove6);

printf("\033[1;32mft_memset\033[0m\n");
	char buff_memset1[4] = "aaaa";
	char buff_memset2[4] = "aaaa";
	printf("Should be: cccc (aaaa, 'c', 4), Output: ");
	ft_memset(buff_memset1, 'c', sizeof(buff_memset1));
	fwrite(buff_memset1, 1, sizeof(buff_memset1), stdout);
	printf("\nStandard memset output: ");
	memset(buff_memset2, 'c', sizeof(buff_memset2));
	fwrite(buff_memset2, 1, sizeof(buff_memset2), stdout);
	printf("\n");
	char buff_memset3[10] = "something";
	char buff_memset4[10] = "something";
	printf("Should be: xxxxthing (something, 'x', 4), Output: ");
	ft_memset(buff_memset3, 'x', 4);
	fwrite(buff_memset3, 1, sizeof(buff_memset3), stdout);
	printf("\n");
	printf("Standard memset output: ");
	memset(buff_memset4, 'x', 4);
	fwrite(buff_memset4, 1, sizeof(buff_memset4), stdout);
	printf("\n");

printf("\033[1;32mft_putchar_fd\033[0m\n");
	ft_putchar_fd('\n', 1);
	ft_putchar_fd('G', 1);
	printf("\nPrints newline and 'G'\n");

printf("\033[1;32mft_putendl_fd\033[0m\n");
	ft_putendl_fd("String and newline", 1);
	ft_putendl_fd("Another one", 1);

printf("\033[1;32mft_putnbr_fd\033[0m\n");
	ft_putnbr_fd(-2147483648, 1);
	printf(" | Should be: -2147483648\n");
	ft_putnbr_fd(2147483647, 1);
	printf(" | Should be: 2147483647\n");
	ft_putnbr_fd(-15, 1);
	printf("| Should be: -15\n");
	ft_putnbr_fd(0, 1);
	printf(" | Should be: 0\n");

printf("\033[1;32mft_putstr_fd\033[0m\n");
	ft_putstr_fd("Putting str. ", 1);
	ft_putstr_fd("And str with newline.\n", 1);
	ft_putstr_fd("one more str", 1);
	printf("\n");

printf("\033[1;32mft_split\033[0m\n");
	printf("String: tralalala0tadada. Separator: 0\n");
	char str_split1[] = "tralalala0tadada";
	char sep1 = '0';
	char **arr_split1 = ft_split(str_split1, sep1);
	int i1 = 0;
	while (arr_split1[i1] != 0)
	{
		printf("[%s]\n", arr_split1[i1]);
		i1++;
	}

	printf("String: >example>. Separator: >\n");
	char str_split2[] = ">example>";
	char sep2 = '>';
	char **arr_split2 = ft_split(str_split2, sep2);
	int i2 = 0;
	while (arr_split2[i2] != 0)
	{
		printf("[%s]\n", arr_split2[i2]);
		i2++;
	}

printf("\033[1;32mft_strchr\033[0m\n");
	printf("Testing string: Hello, world!\n");
	char str_strchr[] = "Hello, world!";
	char *ptr_strchr;
	ptr_strchr = ft_strchr(str_strchr, '!');
	printf("Occurence of ! found at index %ld\n", ptr_strchr - str_strchr);

	char str_strchr1[] = "Hello, world!";
	char *ptr_strchr1;
	ptr_strchr1 = ft_strchr(str_strchr1, '\0');
	printf("Occurence of null character found at index %ld\n", ptr_strchr1 - str_strchr1);

printf("\033[1;32mft_strdup\033[0m\n");
	char str_strdup[] = "Duplicate me!";
	char str_strdup1[] = "";
	printf("Original address of Duplicate me: %p\n", str_strdup);
	printf("Duplicate of Duplicate me: %s %p\n", ft_strdup(str_strdup), ft_strdup(str_strdup));
	printf("Original address of empty string: %p\n", str_strdup1);
	printf("Empty string: %s %p\n", ft_strdup(str_strdup1), ft_strdup(str_strdup));

printf("\033[1;32mft_striteri\033[0m\n");
	char string[] = "abcdef";
	ft_striteri(string, &ft_increment_striteri); //increment function is up there with includes
	printf("Using ft_striteri to print abcdef incremented by 1: %s\n", string);

printf("\033[1;32mft_strjoin\033[0m\n");
	char str_join1[] = "Very ";
	char str_join2[] = "funny";
	printf("str1: Very , str2: funny\n");
	printf("%s\n", ft_strjoin(str_join1, str_join2));

printf("\033[1;32mft_strlcat\033[0m\n");
	char str_lcat1[] = "join ";
	char str_lcat2[] = "str";
	printf("join and str, size is 20 - total length 8 bytes\n");
	printf("%zu\n", ft_strlcat(str_lcat1, str_lcat2, 20));

printf("\033[1;32mft_strlcpy\033[0m\n");
	char destcpy1[5];
	char srccpy1[] = "copy me!";
	size_t result = ft_strlcpy(destcpy1, srccpy1, sizeof(destcpy1));
	printf("Copy first five char of: copy me, incl. null character\n");
	printf("ft_strlcpy: string: %s, size: %ld\n", destcpy1, result);

	char destcpy3[0];
	char srccpy3[] = "";
	size_t result3 = ft_strlcpy(destcpy3, srccpy3, 0);
	printf("With 0 as parameters\n");
	printf("ft_strlcpy: string: %s, size: %ld\n", destcpy3, result3);

printf("\033[1;32mft_strlen\033[0m\n");
	char str_len1[] = "cool";
	char str_len2[] = "";
	printf("String: cool, ft_strlen: %d\n", (int)ft_strlen(str_len1));
	printf("String: cool, strlen: %d\n", (int)strlen(str_len1));
	printf("Empty string, ft_strlen: %d\n", (int)ft_strlen(str_len2));
	printf("Empty string, strlen: %d\n", (int)strlen(str_len2));

printf("\033[1;32mft_strmapi\033[0m\n");
	char str_mapi[] = "abcdef";
	char *result_mapi = ft_strmapi(str_mapi, ft_increment_strmapi);
	printf("Using ft_strmapi to print abcdef incremented by 1: %s\n", result_mapi);	//increment function is up there

printf("\033[1;32mft_strncmp\033[0m\n");
	char	str_strncmp3[] = "abc";
	char	str_strncmp4[] = "abc";
	int		result_m1;
	int		result_s1;
	result_m1 = ft_strncmp(str_strncmp3, str_strncmp4, 1);
	printf("Mine ft_strncmp: %d | abc vs abc\n", result_m1);
	result_s1 = strncmp(str_memcmp3, str_memcmp4, 3);
	printf("Std strncmp: %d\n", result_s1);

	char	str_strncmp5[] = "something";
	char	str_strncmp6[] = "sth";
	int		result_m2;
	int		result_s2;
	result_m2 = ft_strncmp(str_strncmp5, str_strncmp6, 3);
	printf("Mine ft_strncmp: %d | something vs sth\n", result_m2);
	result_s2 = strncmp(str_strncmp5, str_strncmp6, 3);
	printf("Std strncmp: %d\n", result_s2);

printf("\033[1;32mft_strnstr\033[0m\n");
	char	str_strnstr1[] = "This is";
	char	str_strnstr2[] = "his";
	printf("String: This is, Substring: his | ");
	printf("%s\n", ft_strnstr(str_strnstr1, str_strnstr2, 10));
	printf("String: This is, Substring: empty string | ");
	char	str_strnstr3[] = "This is";
	char	str_strnstr4[] = "";
	printf("%s\n", ft_strnstr(str_strnstr3, str_strnstr4, 10));

printf("\033[1;32mft_strrchr\033[0m\n");
	printf("Testing string: Hello, world!\n");
	char str_strrchr[] = "Hello, world!";
	char *ptr_strrchr;
	ptr_strrchr = ft_strrchr(str_strrchr, '!');
	printf("Occurence of ! found at index %ld\n", ptr_strrchr - str_strrchr);

	char str_strrchr1[] = "Hello, world!";
	char *ptr_strrchr1;
	ptr_strrchr1 = ft_strrchr(str_strrchr1, '\0');
	printf("Occurence of null character found at index %ld\n", ptr_strrchr1 - str_strrchr1);

printf("\033[1;32mft_substr\033[0m\n");
	char str_substr3[] = "Hello, world!";
	char *str_substr4;
	str_substr4 = ft_substr(str_substr3, 2, 3);
	printf("Original string: %s, return substring on index 2, len 3: %s\n", str_substr3, str_substr4);

	char str_substr1[] = "abc";
	char *str_substr2;
	str_substr2 = ft_substr(str_substr1, 2, 2);
	printf("Original string: %s, return substring on index 2, len 2: %s\n", str_substr1, str_substr2);

printf("\033[1;32mft_strtrim\033[0m\n");
	char *orig_string_trim = "<<example<<";
	char *substring_trim;
	char *set_trim = "<<";
	substring_trim = ft_strtrim(orig_string_trim, set_trim);
	printf("Original string: %s\n", orig_string_trim);
	printf("Substring after trimming <<: %s\n", substring_trim);

printf("\033[1;32mft_tolower\033[0m\n");;
	printf("Lowercased A: %c\n", ft_tolower('A'));

printf("\033[1;32mft_toupper\033[0m\n");
	printf("Uppercased a: %c\n", ft_toupper('a'));

printf("\033[1;32mft_calloc\033[0m\n");
printf("0 set as parameter w/ calloc: ");
	int *c_ptr2 = ft_calloc(0, 0);
	printf("%d\n", *c_ptr2);
	free(c_ptr2);

printf("Allocate 5 int w/ calloc: ");
	int *cc_ptr = ft_calloc(5, sizeof(int));
	int i = 0;
	while (i++ < 5)
		printf("%d ", *(cc_ptr + i));
	printf("\n");
	free(cc_ptr);

printf("Error using calloc: ");
	size_t large_size = (size_t) -1;
	int *c_ptr1 = ft_calloc(large_size / sizeof(int), sizeof(int));
	if (c_ptr1 == NULL)
	{
		printf("Error allocating memory\n");
		return (1);
	}
	printf("%d ", *(c_ptr1));
	free(c_ptr1);
}
