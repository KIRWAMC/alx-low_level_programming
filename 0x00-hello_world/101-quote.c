#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
    char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    ssize_t len = 0;

    while (str[len])
        len++;

    if (write(STDERR_FILENO, str, len) != len)
        return (1);

    return (1);
}

