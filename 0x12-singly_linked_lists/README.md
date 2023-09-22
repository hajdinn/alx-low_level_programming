## 0x12. C - Singly linked lists


### Task 0 0-print_list.c
A function that prints all the elements of a list_t list.

Prototype: size_t print_list(const list_t *h);
Return: the number of nodes

### Task 1 1-list_len.c

A function that returns the number of elements in a linked list_t list.

Prototype: size_t list_len(const list_t *h);

### Task 2 2-add_node.c

a function that adds a new node at the beginning of a list_t list.

Prototype: list_t *add_node(list_t **head, const char *str);
Return: the address of the new element, or NULL if it failed

### Task 3 3-add_node_end.c 

A function that adds a new node at the end of a list_t list.

Prototype: list_t *add_node_end(list_t **head, const char *str);
Return: the address of the new element, or NULL if it failed
str needs to be duplicated

### Task 4 4-free_list.c

a function that frees a list_t list.

Prototype: void free_list(list_t *head);

### Task 5 100-first.c

 a function that prints You're beat! and yet, you must allow,\nI bore my house upon my back!\n before the main function is executed.

### Task 6 101-hello_holberton.asm

A 64-bit program in assembly that prints Hello, Holberton, followed by a new line.
we are only allowed to use the printf function
we are not allowed to use interrupts
The program will be compiled using nasm and gcc
