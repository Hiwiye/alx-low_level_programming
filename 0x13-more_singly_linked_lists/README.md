# 0x13. More singly linked lists

This project involves working with singly linked lists in C. The tasks include creating various functions to manipulate and work with singly linked lists. The provided data structure for this project is:

```c
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

