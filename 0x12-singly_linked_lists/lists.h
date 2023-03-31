#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
#include <stdio.h>
int _putchar(char c);
typedef struct list{
	char *str;
	int len;
	struct list *next;
}list_t;
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
#endif
