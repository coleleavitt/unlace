/* Singly linked list over a fixed node pool (no allocator). */
#include "corpus.h"

struct node {
    int value;
    struct node *next;
};

struct pool {
    struct node nodes[64];
    int used;
};

struct node *pool_alloc(struct pool *p, int value) {
    if (p->used >= 64)
        return NULL;
    struct node *n = &p->nodes[p->used++];
    n->value = value;
    n->next = NULL;
    return n;
}

struct node *insert_sorted(struct node *head, struct node *n) {
    if (!head || n->value < head->value) {
        n->next = head;
        return n;
    }
    struct node *cur = head;
    while (cur->next && cur->next->value <= n->value)
        cur = cur->next;
    n->next = cur->next;
    cur->next = n;
    return head;
}

struct node *list_reverse(struct node *head) {
    struct node *prev = NULL;
    while (head) {
        struct node *next = head->next;
        head->next = prev;
        prev = head;
        head = next;
    }
    return prev;
}

long list_sum(const struct node *n) {
    long s = 0;
    for (; n; n = n->next)
        s += n->value;
    return s;
}

int list_length(const struct node *n) {
    int len = 0;
    while (n) {
        len++;
        n = n->next;
    }
    return len;
}

struct node *list_remove(struct node *head, int value) {
    struct node **link = &head;
    while (*link) {
        if ((*link)->value == value) {
            *link = (*link)->next;
            break;
        }
        link = &(*link)->next;
    }
    return head;
}

int list_nth(const struct node *n, int index) {
    while (n && index-- > 0)
        n = n->next;
    return n ? n->value : -1;
}

int main(void) {
    struct pool p;
    p.used = 0;
    struct node *head = NULL;
    int seed = 12345;
    for (int i = 0; i < 20; i++) {
        seed = seed * 1103515245 + 12345;
        head = insert_sorted(head, pool_alloc(&p, (seed >> 16) & 0xff));
    }
    printf("len=%d sum=%ld first=%d tenth=%d\n", list_length(head), list_sum(head), list_nth(head, 0), list_nth(head, 9));
    head = list_remove(head, list_nth(head, 3));
    head = list_reverse(head);
    printf("len=%d first=%d last=%d\n", list_length(head), list_nth(head, 0), list_nth(head, list_length(head) - 1));
    return (int)(list_sum(head) & 0xff);
}
