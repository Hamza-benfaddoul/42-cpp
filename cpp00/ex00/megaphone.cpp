#include <cstdlib>
#include <iostream>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	while(i < ac)
	{
		j = 0;
		while(av[i][j])
		{
			if (av[i][j] >= 'a' && av[i][j] <= 'z')
				std::cout << (char)(av[i][j] - 32);
			else
				std::cout << av[i][j];
			j++;
		}
		i++;
	}
	std::cout<<std::endl;
	return (EXIT_SUCCESS);
}
