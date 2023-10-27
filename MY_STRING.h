#include <stdio.h>
#include <stdlib.h>

void *MY_memchr(const void *str, int c, int n);
int MY_memcmp(const void *str1, const void *str2, int n);
void *MY_memcpy(void *dest, const void * src, int n);
void *MY_memmove(void *str1, const void *str2, int n);
void *MY_memset(void *str, int c, int n);
char *MY_strcat(char *dest, const char *src);
char *MY_strncat(char *dest, const char *src, int n);
char *MY_strchr(const char *str, int c);
int MY_strcmp(const char *str1, const char *str2);
int MY_strncmp(const char *str1, const char *str2, int n);
int MY_strcoll(const char *str1, const char *str2);
char *MY_strcpy(char *dest, const char *src);
char *MY_strncpy(char *dest, const char *src, int n);
int MY_strcspn(const char *str1, const char *str2);
char *MY_strerror(int errnum);
int MY_strlen(const char *str);
char *MY_strpbrk(const char *str1, const char *str2);
char *MY_strrchr(const char *str, int c);
int MY_strspn(const char *str1, const char *str2);
char *MY_strstr(const char *haystack, const char *needle);
int MY_strxfrm(char *dest, const char *src, int n);
