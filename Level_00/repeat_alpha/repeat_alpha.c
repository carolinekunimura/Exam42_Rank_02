#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    int letter = 0;
    int repeat = 0;

    if (argc == 2)
    {
        while(argv[1][i] != '\0')
        {
            repeat = 0;
            if (argv[1][i] > 64 && argv[1][i] < 91)
            {
                letter = argv[1][i] - 64;
                while (repeat < letter)       
                {
                    write(1, &argv[1][i], 1);
                    repeat++;
                }
            }
            else if(argv[1][i] > 96 && argv[1][i] < 123)
            {
                letter = argv[1][i] - 96;
                while (repeat < letter)       
                {
                    write(1, &argv[1][i], 1);
                    repeat++;
                }
            }
            else
                    write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}
