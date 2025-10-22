#include"libft.h"
#include<stdio.h>
#include <fcntl.h>  // For open()
#include <unistd.h> // For close()
// void tests(int i, char *t){
//     int atoistd = atoi(t);
//     int atoift = ft_atoi(t);
//     int status = atoistd==atoift;
//     printf("test #%d, std %d, ft %d ==> %d\n", i, atoistd, atoift, status);
// }
int main()
{
    // tests(1, "9898");
    // tests(2, "42");
    // tests(3, "-1337");
    // tests(4, "1337");
    // tests(5, "-21474836480");
    // tests(6, "2147483647");


    int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1)
    {
        // Handle error
        return 1;
    }

    ft_putnbr_fd(55, 1);

    close(fd); // Don't forget to close the file descriptor
    return 0;
}