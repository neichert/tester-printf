#include "ft_printf.h"
#include <limits.h>

int	main(void)
{
	int test_ok = 0;

	printf("\n------------ TEST ------------\n\n\n");
	printf("printf() / ft_printf()\n\n");
	printf("\n\n----------------------------------------------------\n");
	printf("Test de %%c:\n");
	char	c = 'a';
	if (printf("%c ", c) == ft_printf("%c ", c))
	{
		printf("✅");
	}
	else
	{
		printf("❌");
		test_ok = 1;
	}
	printf("\n----------------------------------------------------\n\n");


	printf("\n\n----------------------------------------------------\n");
	printf("Test de %%s:\n");
	char	*str = "Bonjour";
	if (printf("%s ", str) == ft_printf("%s ", str))
	{
		printf("✅");
	}
	else
	{
		printf("❌");
		test_ok = 1;
	}
	printf("\n----------------------------------------------------\n\n");


	printf("\n\n----------------------------------------------------\n");
	printf("Test de %%p:\n");
	char	*adresse_str = "Bonjour";
	if (printf("%p ", adresse_str) == ft_printf("%p ", adresse_str))
	{
		printf("✅");
	}
	else
	{
		printf("❌");
		test_ok = 1;
	}
	printf("\n----------------------------------------------------\n\n");


	printf("\n\n----------------------------------------------------\n");
	printf("Test de %%d:\n");
	int	dec_nbr = 42;
	if (printf("%d ", dec_nbr) == ft_printf("%d ", dec_nbr))
	{
		printf("✅");
	}
	else
	{
		printf("❌");
		test_ok = 1;
	}
	printf("\n----------------------------------------------------\n\n");


	printf("\n\n----------------------------------------------------\n");
	printf("Test de %%i:\n");
	int	int_nbr = 123;
	if (printf("%i ", int_nbr) == ft_printf("%i ", int_nbr))
	{
		printf("✅");
	}
	else
	{
		printf("❌");
		test_ok = 1;
	}
	printf("\n----------------------------------------------------\n\n");


	printf("\n\n----------------------------------------------------\n");
	printf("Test de %%u:\n");
	unsigned int	udec = 45687;
	if (printf("%u ", udec) == ft_printf("%u ", udec))
	{
		printf("✅");
	}
	else
	{
		printf("❌");
		test_ok = 1;
	}
	printf("\n----------------------------------------------------\n\n");


	printf("\n\n----------------------------------------------------\n");
	printf("Test de %%x:\n");
	int hex = 255;
	if (printf("%x ", hex) == ft_printf("%x ", hex))
	{
		printf("✅");
	}
	else
	{
		printf("❌");
		test_ok = 1;
	}
	printf("\n----------------------------------------------------\n\n");


	printf("\n\n----------------------------------------------------\n");
	printf("Test de %%x:\n");
	int hex_maj = 255;
	if (printf("%X ", hex_maj) == ft_printf("%X ", hex_maj))
	{
		printf("✅");
	}
	else
	{
		printf("❌");
		test_ok = 1;
	}
	printf("\n----------------------------------------------------\n\n");

	printf("\n\n----------------------------------------------------\n");
	printf("Test de %%%%:\n");
	if (printf("%% ") == ft_printf("%% "))
	{
		printf("✅");
	}
	else
	{
		printf("❌");
		test_ok = 1;
	}
	printf("\n----------------------------------------------------\n\n");

	printf("\n\n----------------------------------------------------\n");
	printf("Test de NULL:\n");
	if (printf(NULL) == ft_printf(NULL))
	{
		printf("✅");
	}
	else
	{
		printf("❌");
		test_ok = 1;
	}
	printf("\n----------------------------------------------------\n\n");

	printf("\n\n----------------------------------------------------\n");
	printf("Test de \"\":\n");
	if (printf("") == ft_printf(""))
	{
		printf("✅");
	}
	else
	{
		printf("❌");
		test_ok = 1;
	}
	printf("\n----------------------------------------------------\n\n");

	printf("\n\n----------------------------------------------------\n");
	printf("Test de INT_MIN:\n");
	if (printf("%i", INT_MIN) == ft_printf("%i", INT_MIN))
	{
		printf("✅");
	}
	else
	{
		printf("❌");
		test_ok = 1;
	}
	printf("\n----------------------------------------------------\n\n");

	printf("\n\n----------------------------------------------------\n");
	printf("Test de INT_MAX:\n");
	if (printf("%i", INT_MAX) == ft_printf("%i", INT_MAX))
	{
		printf("✅");
	}
	else
	{
		printf("❌");
		test_ok = 1;
	}
	printf("\n----------------------------------------------------\n\n");

	printf("\n\n----------------------------------------------------\n");
	printf("Test de (void *)-1 (pointeur invalide):\n");
	if (printf("%p", (void *)-1) == ft_printf("%p", (void *)-1))
	{
		printf("✅");
	}
	else
	{
		printf("❌");
		test_ok = 1;
	}
	printf("\n----------------------------------------------------\n\n");

	printf("\n\n----------------------------------------------------\n");
	printf("Test de mixte:\n");
	char *str_mixte = "Salut";
	if (printf("%c, %s, %p, %d, %i, %u, %x, %X, %% \n", 'a', "bonjour", str_mixte, 123, 42, 456, 255, 255) == ft_printf("%c, %s, %p, %d, %i, %u, %x, %X, %% \n", 'a', "bonjour", str_mixte, 123, 42, 456, 255, 255))
	{
		printf("✅");
	}
	else
	{
		printf("❌");
		test_ok = 1;
	}
	printf("\n----------------------------------------------------\n\n");

	printf("\n\n----------------------------------------------------\n");
	printf("----------------------------------------------------\n");
	if (test_ok == 0)
	{
		printf(" \033[1;32m✅✅✅ Tout les test sont passe avec succes ✅✅✅\033[0m");
	}
	else
	{
		printf(" \033[1;31m❌❌❌ Erreur dans un ou plusieurs test ❌❌❌\033[0m");
	}
	printf("\n----------------------------------------------------");
	printf("\n----------------------------------------------------\n\n");
}
