/* Hand-rolled string routines over fixed buffers. */
#include "corpus.h"

size_t str_len(const char *s) {
    const char *p = s;
    while (*p)
        p++;
    return (size_t)(p - s);
}

char *str_copy(char *dst, const char *src, size_t cap) {
    size_t i = 0;
    if (cap == 0)
        return dst;
    for (; i + 1 < cap && src[i]; i++)
        dst[i] = src[i];
    dst[i] = '\0';
    return dst;
}

void str_reverse(char *s) {
    size_t n = str_len(s);
    for (size_t i = 0, j = n ? n - 1 : 0; i < j; i++, j--) {
        char t = s[i];
        s[i] = s[j];
        s[j] = t;
    }
}

int to_upper_inplace(char *s) {
    int changed = 0;
    for (; *s; s++) {
        if (*s >= 'a' && *s <= 'z') {
            *s = (char)(*s - 'a' + 'A');
            changed++;
        }
    }
    return changed;
}

int count_words(const char *s) {
    int words = 0;
    int in_word = 0;
    for (; *s; s++) {
        int space = *s == ' ' || *s == '\t' || *s == '\n';
        if (space) {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            words++;
        }
    }
    return words;
}

int str_compare(const char *a, const char *b) {
    while (*a && *a == *b) {
        a++;
        b++;
    }
    return (unsigned char)*a - (unsigned char)*b;
}

const char *str_find(const char *hay, const char *needle) {
    if (!*needle)
        return hay;
    for (; *hay; hay++) {
        const char *h = hay;
        const char *n = needle;
        while (*h && *n && *h == *n) {
            h++;
            n++;
        }
        if (!*n)
            return hay;
    }
    return NULL;
}

int main(void) {
    char buf[64];
    const char *text = "the quick brown fox jumps over the lazy dog";
    str_copy(buf, text, sizeof buf);
    printf("len=%d words=%d\n", (int)str_len(buf), count_words(buf));
    str_reverse(buf);
    printf("rev=%s\n", buf);
    printf("upper=%d\n", to_upper_inplace(buf));
    printf("cmp=%d %d %d\n", str_compare("abc", "abd") < 0, str_compare("b", "a") > 0, str_compare("x", "x"));
    const char *hit = str_find(text, "lazy");
    printf("find=%d miss=%d\n", hit ? (int)(hit - text) : -1, str_find(text, "cat") == NULL);
    return (int)(str_len(text) & 0x7f);
}
