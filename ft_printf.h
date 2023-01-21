/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobabeke <mobabeke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 15:38:35 by mobabeke          #+#    #+#             */
/*   Updated: 2023/01/21 14:10:20 by mobabeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

char	*ft_strchr(const char *str, int c);
int		ft_strlen(const char *str);
void	ft_putstr_fd(char *s, int fd);
int		ft_check_format(va_list arg, char c);
void	ft_putnbr_fd(int n, int fd);
int		ft_intlen(int x);
void	ft_putchar_fd(char c, int fd);
int		ft_converto_c(va_list arg);
int		ft_converto_s(va_list arg);
int		ft_converto_di(va_list arg);
int		ft_converto_x(va_list arg);
int		ft_converto_cx(va_list arg);
int		ft_converto_p(va_list arg);
int		ft_printf(const char *str, ...);
int		ft_converto_u(va_list arg);
int		ft_converto_p(va_list arg);
int		ft_converto_hex(size_t n);
int		ft_converto_hexupper(unsigned int n);
void	ft_unputnbr_fd(unsigned int n, int fd);
int		ft_unintlen(unsigned int i);
int		printpers(char i);

#endif
