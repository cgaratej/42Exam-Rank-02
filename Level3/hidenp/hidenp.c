#include <unistd.h>

int main(int a, char **b)
{
	if (a == 3)
	{
		int i = 0;
		int j = 0;

		while (b[1][i] && b[2][j])
		{
			if (b[1][i] == b[2][j])
				i++;
			j++;
		}
		if (b[1][i] == '\0')
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	write(1, "\n", 1);
}
