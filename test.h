#ifndef TEST_H
# define TEST_H

# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/stat.h>
# include <fcntl.h>

int		ft_strlen(const char *str);
char	*ft_strcpy(char *dest, const char *src);
int		ft_strcmp(const char *str1, const char *str2);
char	*ft_strdup(const char *str);
ssize_t ft_write(int fd, const void *buf, size_t count);
ssize_t ft_read(int fd, void *buf, size_t count);

#endif
