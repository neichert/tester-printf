/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   auto_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neichert <neichert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 13:10:56 by neichert          #+#    #+#             */
/*   Updated: 2025/11/26 14:42:20 by neichert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int test_ok = 0;

	printf("------------ TEST ------------\n\n");
	printf("printf() / ft_printf()\n");
	printf("Test de %%c:\n");
	char	c = 'a';
	if (printf("%c ", c) == ft_printf("%c ", c))
	{
		printf("✅\n\n");
	}
	else
	{
		printf("❌\n\n");
		test_ok = 1;
	}


	printf("Test de %%s:\n");
	char	*str = "Bonjour";
	if (printf("%s ", str) == ft_printf("%s ", str))
	{
		printf("✅\n\n");
	}
	else
	{
		printf("❌\n\n");
		test_ok = 1;
	}


	printf("Test de %%p:\n");
	char	*adresse_str = "Bonjour";
	if (printf("%p ", adresse_str) == ft_printf("%p ", adresse_str))
	{
		printf("✅\n\n");
	}
	else
	{
		printf("❌\n\n");
		test_ok = 1;
	}


	printf("Test de %%d:\n");
	int	dec_nbr = 42;
	if (printf("%d ", dec_nbr) == ft_printf("%d ", dec_nbr))
	{
		printf("✅\n\n");
	}
	else
	{
		printf("❌\n\n");
		test_ok = 1;
	}

	
	printf("Test de %%i:\n");
	int	int_nbr = 123;
	if (printf("%i ", int_nbr) == ft_printf("%i ", int_nbr))
	{
		printf("✅\n\n");
	}
	else
	{
		printf("❌\n\n");
		test_ok = 1;
	}


	printf("Test de %%u:\n");
	unsigned int	udec = 45687;
	if (printf("%u ", udec) == ft_printf("%u ", udec))
	{
		printf("✅\n\n");
	}
	else
	{
		printf("❌\n\n");
		test_ok = 1;
	}


	printf("Test de %%x:\n");
	int hex = 255;
	if (printf("%x ", hex) == ft_printf("%x ", hex))
	{
		printf("✅\n\n");
	}
	else
	{
		printf("❌\n\n");
		test_ok = 1;
	}


	printf("Test de %%x:\n");
	int hex_maj = 255;
	if (printf("%X ", hex_maj) == ft_printf("%X ", hex_maj))
	{
		printf("✅\n\n");
	}
	else
	{
		printf("❌\n\n");
		test_ok = 1;
	}

	printf("Test de %%%%:\n");
	if (printf("%% ") == ft_printf("%% "))
	{
		printf("✅\n\n");
	}
	else
	{
		printf("❌\n\n");
		test_ok = 1;
	}

	
	printf("Test de mixte:\n");
	char *str_mixte = "Salut";
	if (printf("%c, %s, %p, %d, %i, %u, %x, %X, %% \n", 'a', "bonjour", str_mixte, 123, 42, 456, 255, 255) == ft_printf("%c, %s, %p, %d, %i, %u, %x, %X, %% \n", 'a', "bonjour", str_mixte, 123, 42, 456, 255, 255))
	{
		printf("✅\n\n");
	}
	else
	{
		printf("❌\n\n");
		test_ok = 1;
	}

	if (test_ok == 0)
	{
		printf("\033[1;32m✅✅✅ Tout les test sont passe avec succes ✅✅✅\033[0m\n");
		printf("\n");
	}
	else
	{
		printf("\033[1;31m❌❌❌ Erreur dans un ou plusieurs test ❌❌❌\033[0m\n");
		printf("\n");
	}
}
