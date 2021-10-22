/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr_tester.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 14:58:21 by ablaamim          #+#    #+#             */
/*   Updated: 2021/10/22 15:07:04 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	(void)	argc;
	(void)	argv;
	char	*ret_strrchr;
	char	*ret_ft_strrchr;
	int		index;
	char	my_test_list[10] = { 'a', 'A', '9', 'z', '%', '\n', '\0', '0', 'Z', '\r'};
	char	str[13] = {"Hello world!"};

	index = 0;
	printf("%s%s%s", GREEN, "-------------------- TESTS ------------------\n", DEFAULT);
	while (index < 10)
	{
		ret_strrchr = strrchr(str, my_test_list[index]);
		ret_ft_strrchr = ft_strrchr(str, my_test_list[index]);
		if (ret_strrchr == ret_ft_strrchr)
			printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
		else
			printf("%s%s%s", RED, "[KO]\n", DEFAULT);
		++index;
	}
	printf("%s%s%s", GREEN, "------------------- FINISH ------------------\n", DEFAULT);
	return (0);
}
