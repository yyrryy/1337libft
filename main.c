#include"libft.h"
#include"stdio.h"
#include<string.h>
#include<bsd/string.h>
#include<ctype.h>
char alternate(unsigned int i, char c)
{
    (void)i;
	if (c >= 97 && c <= 122)
		c -= 32;
    else if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);

}
int main()
{
  short a[4] = {1, 5, 4, 2};
  size_t i = 0;
  while (i<sizeof(a)/sizeof(a[0]))
  {
    ft_memset(&a[i], 0, 2);
    ft_memset(&a[i], 514, 1);
    i++;
  }
  i = 0;
  while (i<sizeof(a)/sizeof(a[0]))
  {
    printf("%d\n", a[i]);
    i++;
  }
  
  return 0;
}
