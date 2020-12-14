/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 12:13:54 by user42            #+#    #+#             */
/*   Updated: 2020/12/12 17:56:55 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "./rendu-printf/ft_printf.h"
#include <stdio.h>
#include "./rendu-printf/ft_printf.h"

int main ()
{
    
unsigned int i = -167;
char *str = NULL;
int *ptr;

ptr = NULL;
printf("mes variables\n i:%d    ---  str: %s    ---et--- ptr:%p\n", i, str, ptr);
printf("A la mano :\nHoho%.cMotherfucker\n", 'c');
ft_printf("A la ftpf :\nHoho%cMotherfucker\n", 'c');

printf("_____________\n");
printf("Test du zéro :\nHoho%05dMotherfucker\n", i);
ft_printf("ft, test du zéro :\nHoho%05dMotherfucker\n", i);
printf("_____________\n");
printf("Test de l'etoile :\nHoho%*dMotherfucker\n", 0, i);
ft_printf("ft, test de l'etoile :\nHoho%*dMotherfucker\n", 0, i);
printf("_____________\n");
printf("Test du zéro, de l'étoile et du point :\nHoho%*.5dMotherfucker\n", -10, -43);
ft_printf("FT, test du zéro, de l'étoile et du point :\nHoho%*.5dMotherfucker\n", -10, -43);
printf("_____________\n");
printf("Test du point et zéro :\nHoho%.0dMotherfucker\n", i);
ft_printf("FT, test du point et zéro :\nHoho%.0dMotherfucker\n", i);
printf("_____________\n");
printf("Test du point :\nHoho%.dMotherfucker\n", i);
ft_printf("FT, test du point :\nHoho%.dMotherfucker\n", i);
printf("_____________\n");
printf("Test du moins et nombre:\nHoho%-25dMotherfucker\n", i);
ft_printf("FT, test du moins et nombre:\nHoho%-25dMotherfucker\n", i);
printf("_____________\n");
printf("Test des nombres :\nHoho%-25.5dMotherfucker\n", i);
ft_printf("FT, test des nombres :\nHoho%-25.5dMotherfucker\n", i);
printf("_____________\n");
printf("Test du trouchon :\nHoho%0*.*dMotherfucker\n", -10, 5, i);
ft_printf("FT, test du trouchon :\nHoho%0*.*dMotherfucker\n", -10, 5, i);
printf("_____________\n");

printf("_____stringues________%s\n", str);

printf("Premier test :\nHoho%3.1sMotherfucker\n", NULL);
ft_printf("ft, premier test :\nHoho%3.1sMotherfucker\n", NULL);
printf("_____________\n");
printf("Test du moins :\nHoho%-2ssMotherfucker\n", str);
ft_printf("ft, test du moins :\nHoho%-2sMotherfucker\n", str);
printf("_____________\n");
printf("Test de l'etoile :\nHoho%*sMotherfucker\n", 10, str);
ft_printf("ft, test de l'etoile :\nHoho%*sMotherfucker\n", 10, str);
printf("_____________\n");
printf("Test de l'étoile et du point :\nHoho%*.1sMotherfucker\n", 10, str);
ft_printf("FT, test de l'étoile et du point :\nHoho%*.1sMotherfucker\n", 10, str);
printf("_____________\n");
printf("Test du point et zéro :\nHoho%.10sMotherfucker\n", str);
ft_printf("FT, test du point et zéro :\nHoho%.10sMotherfucker\n", str);
printf("_____________\n");
printf("Test du point :\nHoho%.sMotherfucker\n", str);
ft_printf("FT, test du point :\nHoho%.sMotherfucker\n", str);
printf("_____________\n");
printf("Test du moins et nombre:\nHoho%-25sMotherfucker\n", str);
ft_printf("FT, test du moins et nombre:\nHoho%-25sMotherfucker\n", str);
printf("_____________\n");
printf("Test des nombres :\nHoho%-25.5sMotherfucker\n", str);
ft_printf("FT, test des nombres :\nHoho%-25.5sMotherfucker\n", str);
printf("_____________\n");
printf("Test du trouchon :\nHoho%*.*sMotherfucker\n", 10, 5, str);
ft_printf("FT, test du trouchon :\nHoho%*.*sMotherfucker\n", 10, 5, str);
printf("_____________\n");

printf("_____HEXA________\n");

printf("Premier test :\nHoho%xMotherfucker\n", i);
ft_printf("ft, premier test :\nHoho%xMotherfucker\n", i);
printf("_____________\n");
printf("Test du zéro :\nHoho%05xMotherfucker\n", i);
ft_printf("ft, test du zéro :\nHoho%05xMotherfucker\n", i);
printf("_____________\n");
printf("Test de l'etoile :\nHoho%*xMotherfucker\n", 10, i);
ft_printf("ft, test de l'etoile :\nHoho%*xMotherfucker\n", 10, i);
printf("_____________\n");
printf("Test du zéro, de l'étoile et du point :\nHoho%0*.xMotherfucker\n", 10, -43);
ft_printf("FT, test du zéro, de l'étoile et du point :\nHoho%0*.xMotherfucker\n", 10, -43);
printf("_____________\n");
printf("Test du point et zéro :\nHoho%.0XMotherfucker\n", i);
ft_printf("FT, test du point et zéro :\nHoho%.0XMotherfucker\n", i);
printf("_____________\n");
printf("Test du point :\nHoho%.XMotherfucker\n", i);
ft_printf("FT, test du point :\nHoho%.XMotherfucker\n", i);
printf("_____________\n");
printf("Test du moins et nombre:\nHoho%-25xMotherfucker\n", i);
ft_printf("FT, test du moins et nombre:\nHoho%-25xMotherfucker\n", i);
printf("_____________\n");
printf("Test des nombres :\nHoho%-25.5XMotherfucker\n", i);
ft_printf("FT, test des nombres :\nHoho%-25.5XMotherfucker\n", i);
printf("_____________\n");
printf("Test du trouchon :\nHoho%*.*XMotherfucker\n", 10, 5, i);
ft_printf("FT, test du trouchon :\nHoho%*.*XMotherfucker\n", 10, 5, i);
printf("_____________\n");

printf("_____PTR________\n");

printf("Premier test :\nHoho%pMotherfucker\n", ptr);
ft_printf("ft, premier test :\nHoho%pMotherfucker\n", ptr);
printf("_____________\n");
printf("Test de l'etoile :\nHoho%*pMotherfucker\n", 10, ptr);
ft_printf("ft, test de l'etoile :\nHoho%*pMotherfucker\n", 10, ptr);
printf("_____________\n");
printf("Test du point :\nHoho%.pMotherfucker\n", ptr);
ft_printf("FT, test du point :\nHoho%.pMotherfucker\n", ptr);
printf("_____________\n");
printf("Test du moins et nombre:\nHoho%-25pMotherfucker\n", ptr);
ft_printf("FT, test du moins et nombre:\nHoho%-25pMotherfucker\n", ptr);
printf("_____________\n");


ft_printf("Ma copie, sur un pourcent : %% et la bite à dudule\n");
printf("L'original printf : %% et la bite à dudule\n");

}
