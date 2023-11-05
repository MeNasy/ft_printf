/*
 ███▄ ▄███▓▓█████  ███▄    █  ▄▄▄        ██████▓██   ██▓
▓██▒▀█▀ ██▒▓█   ▀  ██ ▀█   █ ▒████▄    ▒██    ▒ ▒██  ██▒
▓██    ▓██░▒███   ▓██  ▀█ ██▒▒██  ▀█▄  ░ ▓██▄    ▒██ ██░
▒██    ▒██ ▒▓█  ▄ ▓██▒  ▐▌██▒░██▄▄▄▄██   ▒   ██▒ ░ ▐██▓░
▒██▒   ░██▒░▒████▒▒██░   ▓██░ ▓█   ▓██▒▒██████▒▒ ░ ██▒▓░
░ ▒░   ░  ░░░ ▒░ ░░ ▒░   ▒ ▒  ▒▒   ▓▒█░▒ ▒▓▒ ▒ ░  ██▒▒▒
░  ░      ░ ░ ░  ░░ ░░   ░ ▒░  ▒   ▒▒ ░░ ░▒  ░ ░▓██ ░▒░
░      ░      ░      ░   ░ ░   ░   ▒   ░  ░  ░  ▒ ▒ ░░
       ░      ░  ░         ░       ░  ░      ░  ░ ░
                                                ░ ░*/

#include "ft_printf.h"

void	ft_hx(unsigned int nb, char c, int *len)
{
	char	*dizi;
	char	*dizi1;

	dizi = "0123456789abcdef";
	dizi1 = "0123456789ABCDEF";
	if (c == 'x')
	{
		if (nb > 15)
		{
			ft_hx(nb / 16, c, len);
			ft_hx(nb % 16, c, len);
		}
		else
			ft_putchar(dizi[nb], len);
	}
	if (c == 'X')
	{
		if (nb > 15)
		{
			ft_hx(nb / 16, c, len);
			ft_hx(nb % 16, c, len);
		}
		else
			ft_putchar(dizi1[nb], len);
	}
}
