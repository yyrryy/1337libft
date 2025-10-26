#include"libft.h"
#include<stdio.h>
#include<strings.h>
#include<bsd/string.h>
#include<strings.h>
#include<ctype.h>
#include<string.h>
#include <fcntl.h>  // For open()
#include <unistd.h> // For close()
// void tests(int i, char *t){
//     int atoistd = atoi(t);
//     int atoift = ft_atoi(t);
//     int status = atoistd==atoift;
//     printf("test #%d, std %d, ft %d ==> %d\n", i, atoistd, atoift, status);
// }

void check(int t, int succes)
{
	if (succes)
		printf("test %d, is OK\n", t);
	else
		printf("test %d, is NOT OK\n", t);
}
int main(void)
{
	char dest[30]; ft_memset(dest, 0, 30);
	char * src = (char *)"AAAAAAAAA";
	dest[0] = 'B';
	/* 1 */ check(1, ft_strlcat(dest, src, 0) == strlen(src) && !strcmp(dest, "B"));
	dest[0] = 'B';
	/* 2 */ check(2, ft_strlcat(dest, src, 1) == 10 && !strcmp(dest, "B"));
	memset(dest, 'B', 4);
	printf("%s\n", src);
	printf("%s\n", dest);
	/* 3 */ check(3, ft_strlcat(dest, src, 3) == 3 + strlen(src) && !strcmp(dest, "BBBB"));
	/* 4 */ check(4, ft_strlcat(dest, src, 6) == 13 && !strcmp(dest, "BBBBA"));
	printf("%d\n", ft_strlcat(dest, src, 6) && strcmp(dest, "BBBBA"));
	memset(dest, 'C', 5);
	/* 5 */ check(5, ft_strlcat(dest, src, -1) == 14 && !strcmp(dest, "CCCCCAAAAAAAAA"));
	memset(dest, 'C', 15);
	/* 6 */ check(6, ft_strlcat(dest, src, 17) == 24 && !strcmp(dest, "CCCCCCCCCCCCCCCA"));
	memset(dest, 0, 30);
	/* 7 */ check(7, ft_strlcat(dest, src, 1) == strlen(src) && !strcmp(dest, ""));
	memset(dest, 0, 30); memset(dest, '1', 10);
	/* 8 */ check(8, ft_strlcat(dest, src, 5) == strlen(src) + 5 && !strcmp(dest, "1111111111"));
	memset(dest, 0, 30); memset(dest, '1', 10);
	/* 9 */ check(9, ft_strlcat(dest, src, 5) == strlen(src) + 5 && !strcmp(dest, "1111111111"));
	memset(dest, 0, 30); memset(dest, '1', 10);
	/* 10 */ check(10, ft_strlcat(dest, "", 15) == 10 && !strcmp(dest, "1111111111"));
	memset(dest, 0, 30);
	/* 11 */ check(11, ft_strlcat(dest, "", 42) == 0 && !strcmp(dest, ""));
	memset(dest, 0, 30);
	/* 12 */ check(12, ft_strlcat(dest, "", 0) == 0 && !strcmp(dest, ""));
	memset(dest, 0, 30);
	/* 13 */ check(13, ft_strlcat(dest, "123", 1) == 3 && !strcmp(dest, ""));
	memset(dest, 0, 30);
	/* 14 */ check(14, ft_strlcat(dest, "123", 2) == 3 && !strcmp(dest, "1"));
	memset(dest, 0, 30);
	/* 15 */ check(15, ft_strlcat(dest, "123", 3) == 3 && !strcmp(dest, "12"));
	memset(dest, 0, 30);
	/* 16 */ check(16, ft_strlcat(dest, "123", 4) == 3 && !strcmp(dest, "123"));
	memset(dest, 0, 30);
	/* 17 */ check(17, ft_strlcat(dest, "123", 0) == 3 && !strcmp(dest, ""));
	write(1, "\n", 1);
	return (0);
}
