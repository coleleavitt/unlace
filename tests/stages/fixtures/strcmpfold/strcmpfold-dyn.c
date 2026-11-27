/* The pointer shapes for the strcmpfold stage tests, in a dynamic image: libc's
   prototypes (strlen and puts take a char *) type the pointers, which in the
   static image of strcmpfold.c recover int * from their first word read. */
#include <stdio.h>
#include <string.h>

/* memcmp through a char pointer: one 4-byte compare. */
__attribute__((noinline)) int cmd_part(const char *p)
{
    if (strlen(p) < 4)
        return 0;
    return memcmp(p, "PART", 4) == 0;
}

/* 4 + 1 bytes through the pointer. */
__attribute__((noinline)) int cmd_join(const char *p)
{
    if (strlen(p) < 5)
        return 0;
    if (memcmp(p, "JOIN ", 5) == 0)
        return puts(p + 5);
    return 0;
}

/* A compare that starts past the pointer. */
__attribute__((noinline)) int cmd_oper(const char *p)
{
    if (strlen(p) < 5)
        return 0;
    return memcmp(p + 1, "OPER", 4) == 0;
}

int main(int argc, char **argv)
{
    if (argc < 2)
        return 0;
    return cmd_part(argv[1]) + cmd_join(argv[1]) + cmd_oper(argv[1]);
}
