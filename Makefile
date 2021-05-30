all: autoindent

autoindent: autoindent.c
	gcc autoindent.c -o autoindent
