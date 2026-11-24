/* Binary search tree stored in an index-linked array. */
#include "corpus.h"

#define NIL (-1)

struct tree {
    int key[128];
    int left[128];
    int right[128];
    int count;
    int root;
};

void tree_init(struct tree *t) {
    t->count = 0;
    t->root = NIL;
}

int tree_insert(struct tree *t, int key) {
    int *link = &t->root;
    while (*link != NIL) {
        int cur = *link;
        if (key == t->key[cur])
            return 0;
        link = key < t->key[cur] ? &t->left[cur] : &t->right[cur];
    }
    if (t->count >= 128)
        return 0;
    int n = t->count++;
    t->key[n] = key;
    t->left[n] = t->right[n] = NIL;
    *link = n;
    return 1;
}

int tree_contains(const struct tree *t, int key) {
    int cur = t->root;
    while (cur != NIL) {
        if (key == t->key[cur])
            return 1;
        cur = key < t->key[cur] ? t->left[cur] : t->right[cur];
    }
    return 0;
}

int tree_height(const struct tree *t, int n) {
    if (n == NIL)
        return 0;
    int l = tree_height(t, t->left[n]);
    int r = tree_height(t, t->right[n]);
    return 1 + (l > r ? l : r);
}

long tree_weighted_inorder(const struct tree *t, int n, long *position) {
    if (n == NIL)
        return 0;
    long acc = tree_weighted_inorder(t, t->left[n], position);
    acc += (*position)++ * t->key[n];
    acc += tree_weighted_inorder(t, t->right[n], position);
    return acc;
}

int tree_min(const struct tree *t) {
    int cur = t->root;
    if (cur == NIL)
        return 0;
    while (t->left[cur] != NIL)
        cur = t->left[cur];
    return t->key[cur];
}

int main(void) {
    struct tree t;
    tree_init(&t);
    int inserted = 0;
    unsigned x = 2463534242u;
    for (int i = 0; i < 60; i++) {
        x ^= x << 13;
        x ^= x >> 17;
        x ^= x << 5;
        inserted += tree_insert(&t, (int)(x % 500));
    }
    long pos = 0;
    printf("inserted=%d height=%d min=%d\n", inserted, tree_height(&t, t.root), tree_min(&t));
    printf("contains=%d%d%d\n", tree_contains(&t, tree_min(&t)), tree_contains(&t, 1000), tree_contains(&t, -5));
    printf("weighted=%ld\n", tree_weighted_inorder(&t, t.root, &pos));
    return inserted;
}
