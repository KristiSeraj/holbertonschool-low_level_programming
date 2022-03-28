#include "main.h"

int main(int argc, char **argv)
{
        if (argc != 3)
        {
                dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
                exit(97);
        }
	if (argv[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error Can't read from file %s\n", argv[1]);
		exit(98);
	}
        cp(argv[1], argv[2]);

        return (0);
}
